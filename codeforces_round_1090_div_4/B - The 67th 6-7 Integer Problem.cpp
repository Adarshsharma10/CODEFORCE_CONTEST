#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    vector<int> v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    sort(all(v));
    ll sum=0;
    for(int i=0;i<6;i++){
        sum+=(-1*v[i]);
    }
    sum+=v[6];
    cout<<sum<<endl;
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