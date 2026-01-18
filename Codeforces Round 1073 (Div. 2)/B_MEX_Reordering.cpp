#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    bool flag=false;
    int c0=0,c1=0;
    for(auto &x: v){
        cin>>x;
        if(x==0){
            c0++;
        }
        if(x==1){
            c1++;
        }
    }
    if(c0==0){
        cout<<"NO"<<endl;
    }
    else if(c0>1 && c1 ==0){
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

// Successfully Submitted