#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum=0;
    ll z=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]==0) ++z;
    }
    int p = n-z;
    ll k=sum-n+1;
    ll ans = min((ll)p,k);
    cout<<ans<<endl;


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

// Submitted successfull