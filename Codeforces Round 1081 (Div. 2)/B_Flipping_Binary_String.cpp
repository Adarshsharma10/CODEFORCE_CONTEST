#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ones;
    vector<int> zeros;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones.push_back(i + 1);
        } else {
            zeros.push_back(i + 1);
        }
    }


    if (ones.size() % 2 == 0) {
        cout << ones.size() << endl;
        for (int i = 0; i < ones.size(); i++) {
            cout << ones[i];
            if (i < (int)ones.size() - 1) {
                cout << " ";
            }
        }
        if (ones.size() > 0) {
            cout << "\n";
        }
    } 

    else if (zeros.size() % 2 != 0) {
        cout << zeros.size() << endl;
        for (int i = 0; i < zeros.size(); i++) {
            cout << zeros[i];
            if (i < (int)zeros.size() - 1) {
                cout << " ";
            }
        }
        if (zeros.size() > 0) {
            cout << "\n";
        }
    } 

    else {
        cout << -1 << endl;
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