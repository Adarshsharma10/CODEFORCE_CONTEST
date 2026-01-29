#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c=0,f=-1,l=-1;
    for(int i=0;i<n;++i){
        if(s[i]=='1'){
            c++;
            if(f==-1) f=i;
            l=i;
        }
    }

    if(c==0){
        cout<<(n+2)/3<<endl;
        return;
    }
    int a=0;
    a+=(f+1)/3;

    int x=n-1-l;
    a+=(x+1)/3;

    int q=f;
    for(int i=f+1;i<n;i++){
        if(s[i]=='1'){
            int g=i-q-1;
            a+=g/3;
            q=i;
        }
    }
    cout<<c+a<<endl;
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