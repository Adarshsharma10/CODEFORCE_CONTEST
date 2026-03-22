#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        vector<pair<ll, int>> points;
        int curr = 0;

        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                points.push_back({a[i] + a[j], 1}); 
            } 
            else if (a[i] > a[j]) {
                curr++;
                points.push_back({a[i] + a[j], -1});
            }
        }
        sort(points.begin(), points.end());

        int ans = curr;
        for (int j = 0; j < points.size(); ) {
            ll val = points[j].first;
            int g = 0, l = 0;
            while (j < points.size() && points[j].first == val) {
                if (points[j].second == 1) g++;
                else l--;
                j++;
            }
             
            curr += l; 
            ans = max(ans, curr);
            curr += g;
            ans = max(ans, curr);
        }
        cout << ans;
        if (i == n - 1) {
            cout << "";
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
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