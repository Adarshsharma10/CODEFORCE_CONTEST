#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a;
        cin>>n>>a;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans;
        ll left = 0;
        ll right = 0;
        for(ll i = 0;i<n;i++){
            if(a<v[i]){
                right++;
            }
            else if(a>v[i]){
                left++;
            }
        }
        cout<<((right>left) ? (a+1) : (a-1))<<endl;
    }
    return 0;
}
      

//Successfully submitted    