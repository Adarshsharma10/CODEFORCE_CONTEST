#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,s,x;
    cin >>n>>s>>x;
    vector<int> v(n);
    for(auto &x : v) cin>>x;
    ll sum = accumulate(v.begin(),v.end(),0LL);
    if(sum==s) cout<<"YES"<<endl;
    else if(sum>s){
        cout<<"NO"<<endl;
    }
    else{
        if((s-sum)%x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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