#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    sort(v.begin(),v.end());

    set<int> s(v.begin(),v.end());
    vector<int> diff;

    if(s.size()==1){
        cout<<1<<endl;
        return;
    }
    if (s.size() >= 2) {
        auto it = s.begin();
        auto prev = it;
        ++it;

        for (; it != s.end(); ++it) {
            diff.push_back(*it - *prev);
            prev = it;
        }
    }

    int maxi=0,curr=0;
    for(int i=0;i<diff.size();i++){
        if(diff[i]==1){
            curr++;
        }
        else{
            maxi = max(curr,maxi);
            curr = 0;
        }
    }

    cout<<max(curr,maxi)+1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// Successfully Submitted