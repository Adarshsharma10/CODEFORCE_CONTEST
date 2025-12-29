#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x : a){
        cin>>x;
    }
    for(auto &x : b){
        cin>>x;
    }
    for(int bit=20;bit>=0;bit--){
        int cnta=0,cntb=0;
        for(ll i=0;i<n;i++){
            if(a[i]& (1LL << bit)) cnta++;
            if(b[i]& (1LL << bit)) cntb++;
        }
        if(cnta%2 == cntb%2){
            continue;
        }

        for(int i=n-1;i>=0;i--){
            if((a[i]&(1LL<<bit)) != (b[i] &(1LL<<bit))){
                if(i%2==0){
                    cout<<"Ajisai"<<endl;
                }
                else{
                    cout<<"Mai"<<endl;
                }
                return;
            }
        }
    }
    cout<<"Tie"<<endl;
    
    
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








