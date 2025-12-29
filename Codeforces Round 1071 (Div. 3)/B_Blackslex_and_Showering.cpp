#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i>=1){
            sum+=llabs(a[i]-a[i-1]);
        }
    }

    ll maxsave = 0;
    maxsave = max(maxsave,llabs(a[1]-a[0]));
    maxsave = max(maxsave,llabs(a[n-1]-a[n-2]));

    for(int i=1;i+1<n;i++){
        ll save = llabs(a[i]-a[i-1])+llabs(a[i+1]-a[i])-llabs(a[i+1]-a[i-1]);
        maxsave =max(save,maxsave);
    }
    cout<<sum-maxsave<<endl;

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