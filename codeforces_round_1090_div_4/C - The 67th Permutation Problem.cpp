#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int total = 3 * n;
    vector<int> ans(total);
    
    int L = 1;     
    int R = total;

    for (int i = 0; i < total; i += 3) {
        ans[i] = L++;      
        ans[i + 1] = R--;
        ans[i + 2] = R--; 
    }

    for (int i = 0; i < total; i++) {
        cout << ans[i] << (i == total - 1 ? "" : " ");
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

// Successfully Submitted