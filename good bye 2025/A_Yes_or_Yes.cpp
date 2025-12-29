#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int cnt=0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='Y'){
            cnt++;
        }
    }
    if(cnt>=2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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