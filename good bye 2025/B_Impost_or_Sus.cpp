#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string r;
    cin>>r;
    int n = r.size();
    int cs=0,cu=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(r[i]=='s'){
            cs++;
        }
        else{
            cu++;
        }
    }
    if(cs==n){
        cout<<0<<endl;
        return;
    }
    if(r[0]=='u'){
        r[0]='s';
        ans++;
    }
    if(r[n-1]=='u'){
        r[n-1]='s';
        ans++;
    }
    for(int i=1;i<n-1;i++){
        if(r[i]=='u'){
            if(r[i-1]=='u'){
                r[i-1]='s';
                ans++;
            }
            if(r[i+1]=='u'){
                r[i+1]='s';
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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