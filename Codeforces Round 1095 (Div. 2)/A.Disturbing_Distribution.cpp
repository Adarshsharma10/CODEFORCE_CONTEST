#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=1){
            ans+=v[i];
        }
    }
    if(v[n-1]==1){
        ans++;
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