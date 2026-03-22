#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, c, k;
    cin >> n >> c >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            ll aadu = min(k, c - a[i]);
            
            c += (a[i] + aadu);
            k -= aadu;
        }
        else {
            break;
        }
    }

    cout << c << endl;
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

// Successfully submitted