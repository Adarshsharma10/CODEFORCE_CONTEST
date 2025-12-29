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
        
        ll c = -v[n-1];
        ll b = v[n-1];
        ll ans = 0;
        for(int i=n-2;i>=0;i--){
            ll elem = v[i];
            ll opt = c+max(0LL,elem+b);
            c-=elem;
            b =max(b,opt-c);

            if(i==0) ans = opt;
        }
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