#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    for(int j=0;j<n;j++){
        int num=v[j]+1;
        for(int i=j;i<n;i+=2){
            // cout<<"ele "<<v[i]<<endl;
            if(v[i]==num || v[i]==num-2){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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