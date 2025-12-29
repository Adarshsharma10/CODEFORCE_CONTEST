#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i = 0; i<n;i++){
            cin>>v[i];
        }
        ll c=0;
        for(ll i = 0;i<v.size()-1;i++){
            if(v[0]==v[v.size()]){
                v[v.size()]=v[0];
                c += v[0];
                v.erase(v.begin()+0);
            }
            else{
                int min=INT_MIN;
                for(ll i=0;i<v.size()-1;i++){
                    if(max(v[i],v[i+1])>min){
                        min=max(v[i],v[i+1]);
                    }
                }
            }
        }
    }
}