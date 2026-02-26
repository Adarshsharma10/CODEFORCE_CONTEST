#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(auto &x : p){
        cin>>x;
    }
    int max_idx=max_element(p.begin(),p.end())-p.begin();
    swap(p[0],p[max_idx]);
    for(auto x: p){
        cout<<x<<" ";
    }cout<<endl;
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