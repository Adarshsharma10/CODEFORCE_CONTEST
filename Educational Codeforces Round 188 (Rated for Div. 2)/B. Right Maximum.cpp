#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> p(n);
    p[0]=v[0];
    for(int i=1;i<n;i++){
        if(p[i-1]>=v[i]){
            p[i]=p[i-1];
        }
        else{
            p[i]=v[i];
        }
    }
    int op = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(v[i]==p[i]){
            op++;
        }
    }

    cout << op << endl;
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