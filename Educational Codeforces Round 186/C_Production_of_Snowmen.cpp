#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    for(auto &x: a){
        cin>>x;
    }
    for(auto &x: b){
        cin>>x;
    }
    for(auto &x: c){
        cin>>x;
    }
    ll cntAB=0,cntBC=0;
    for(int i=0;i<n;i++){
        bool validAB = true;
        for(int j=0;j<n;j++){
            if(a[j]>=b[(i+j)%n]){
                validAB = false;
                break;
            }
        }
        if(validAB) cntAB++;
    }
    for(int i=0;i<n;i++){
        bool validBC = true;
        for(int j=0;j<n;j++){
            if(b[j]>=c[(i+j)%n]){
                validBC = false;
                break;
            }
        }
        if(validBC) cntBC++;
    }

    cout<<n*cntAB*cntBC<<endl;


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