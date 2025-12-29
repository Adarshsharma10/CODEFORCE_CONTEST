#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x : v){
        cin>>x;
    }
    if(v[0]!=-1 && v[n-1]!=-1 ){
        cout<<abs(v[n-1]-v[0])<<endl;
        for(ll i=0;i<n;i++){
            if(v[i]==-1){
                cout<<0<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    else if(v[0]==-1 && v[n-1]==-1){
        cout<<0<<endl;
        for(ll i=0;i<n;i++){
            if(v[i]==-1){
                cout<<0<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    else if(v[0]==-1 && v[n-1]!=-1){
        cout<<0<<endl;
        cout<<v[n-1]<<" ";
        for(ll i=1;i<n;i++){
            if(v[i]==-1){
                cout<<0<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    else{
        cout<<0<<endl;
        for(ll i=0;i<n-1;i++){
            if(v[i]==-1){
                cout<<0<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<v[0]<<endl;
        
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

// Successfully submitted