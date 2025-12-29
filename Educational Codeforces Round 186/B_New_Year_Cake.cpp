#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    long long a, b;
    cin >> a >> b;

    int ans = 0;

    for (int i = 0; i < 2; i++) { 
        ll w = 0, d = 0, size = 1;

        for (int layers = 1; ; layers++) {
            if ((layers - 1) % 2 == i){
                w += size;
            } 
            else{
                d += size;
            }

            if (w > a || d > b) break;

            ans = max(ans,layers);
            size=size*2;
        }
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

// Successfully Submitted