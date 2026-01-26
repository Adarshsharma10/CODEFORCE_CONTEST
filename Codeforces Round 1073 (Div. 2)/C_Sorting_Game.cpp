#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    if(c0 == 0 || c1 ==0){
        cout<<"Bob"<<endl;
        return;
    }
    


    vector<int> idx;
    bool flag2=false;
    for(int i=1;i<n;i++){
        if(s[i-1]<s[i] && flag2){
            idx.push_back(i);
            break;
        }
        if(s[i-1]>=s[i]){
            flag2=true;
            idx.push_back(i);
        }
        if(i==n-1){
            idx.push_back(i+1);
        }
    }
        
        


    int r=0;
    int cnt=0;
    for(int l=r+1;l<n;l++){
        bool flag = false;
        if(s[l-1]>=s[l]){
            r++;
            flag=true;
        }
        if(flag){
            r++;
            cnt++;
            if(r<n){
                bool ok = is_sorted(s.begin()+r,s.end());
                if(ok){
                    break;
                }
            }
            else{
                break;
            }
        }
    }



    if(cnt==0){
        cout<<"Bob"<<endl;
    }
    else if(!(cnt&1)){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
        cout<<idx.size()<<endl;
        for(auto &y : idx){
            cout<<y<<" ";
        }cout<<endl;
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