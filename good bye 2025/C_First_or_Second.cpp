#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> pref(n + 1), suff(n);
    
    
    for (int i = 1; i < n; i++) {
        pref[i + 1] = pref[i] + abs(v[i]);
    }
    for(int i=0;i<n+1;i++){
        cout<<pref[i]<<" ";
    }cout<<endl;

    
    for (int i = n - 1; i >= 1; i--) {
        suff[i-1] = suff[i] - v[i];
    }
    for(int i=0;i<n;i++){
        cout<<suff[i]<<" ";
    }cout<<endl;

    ll ans = suff[0];
    for (int i = 1; i < n; i++) {
        ans = max(ans, (ll)v[0] + pref[i] + suff[i]);
    }

    cout << ans << endl;
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