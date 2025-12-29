#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    ll coa = 0;
    ll cob = 0;
    for(auto &x : a){
        cin>>x;
        if(x==1){
            coa++;
        }
    }
    for(auto &x : b){
        cin>>x;
        if(x==1){
            cob++;
        }
    }
    for(ll i=0;i<n;i++){
        if((i&1)==0){
            if((coa&1)==0){
                if(a[i]==b[i]){
                    continue;
                }
                else{
                    swap(a[i],b[i]);
                    if(a[i]==1){
                        coa--;
                        cob++;
                    }
                    else{
                        coa++;
                        cob--;
                    }
                }
            }
            else{
                continue;
            }
        }
        else{
            if((cob&1)==0){
                if(a[i]==b[i]){
                    continue;
                }
                else{
                    swap(a[i],b[i]);
                    if(b[i]==1){
                        coa++;
                        cob--;
                    }
                    else{
                        coa--;
                        cob++;
                    }
                }
            }
            else{
                continue;
            }
        }
    }


    if((coa&1)==1 && (cob&1)==0){
        cout<<"AJISAI"<<endl;
    }
    else if((coa&1)==0 && (cob&1)==1){
        cout<<"MAI"<<endl;
    }
    else{
        cout<<"TIE"<<endl;
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



