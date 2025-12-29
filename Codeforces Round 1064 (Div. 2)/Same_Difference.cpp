#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        char x = s[n-1];
        ll c=0;
        for(ll i=0;i<n-1;i++){
            if(s[i]==x){
                c++;
            }
        }
        cout<<n-1-c<<endl;
    }
}