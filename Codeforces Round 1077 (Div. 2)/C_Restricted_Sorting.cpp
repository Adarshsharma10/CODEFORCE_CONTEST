#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long mn = *min_element(v.begin(),v.end());
        long long mx = *max_element(v.begin(),v.end());
        vector<long long> a = v;
        sort(a.begin(), a.end());
        long long k = 2e9;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (v[i] != a[i]) {
                long long ans = max(abs(v[i] - mn), abs(v[i] -mx));
                k = min(k, ans);
                flag = true;
            }
        }
        if (!flag) {
            cout << -1 << endl;
        } else {
            cout << k << endl;
        }
    }
    return 0;
}

// Successfully submitted