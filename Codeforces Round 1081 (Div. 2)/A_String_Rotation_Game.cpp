#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int t=0;
    bool flag=false;

    for(int i=0;i<n;i++){
        if(s[i]!=s[(i+1)%n]){
            t++;
        }
        else{
            flag=true;
        }
    }
    if(t==0){
        cout<<1<<endl;
    }
    else if(flag){
        cout<<t+1<<endl;
    }
    else{
        cout<<t<<endl;
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

// Successfully Submitted