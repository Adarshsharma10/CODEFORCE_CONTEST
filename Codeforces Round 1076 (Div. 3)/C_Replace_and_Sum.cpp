#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,q;
    cin >>n>>q;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x;

    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            a[i]=b[i];
        }
    }

    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            a[i-1]=a[i];
        }
    }

    vector<ll> pref(n + 1, 0);
    for(int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    int l,r;
    while(q--){
        cin>>l>>r;
        ll result = pref[r] - pref[l - 1];
        cout << result << " ";
    }cout<<endl;
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