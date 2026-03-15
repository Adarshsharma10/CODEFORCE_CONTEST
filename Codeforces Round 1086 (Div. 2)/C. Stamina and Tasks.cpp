#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    double max_p=0.0;
    for(int i=n-1;i>=0;i--){
        double penalty = 1.0-(v[i].second/100.0);

        max_p = max(max_p,v[i].first + (penalty*max_p));
    }

    cout<<fixed<<setprecision(10)<<max_p<<endl;



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