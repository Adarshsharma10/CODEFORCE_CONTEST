#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    ll pref[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0){
            pref[i]+=v[i];
        }
        pref[i]+=abs(v[i]);
    }
    
    ll ans=LLONG_MIN;
    ll sum;
    for(int i=0;i<n;i++){
        ans = max(ans,);
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