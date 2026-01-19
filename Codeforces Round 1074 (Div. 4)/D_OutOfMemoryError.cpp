#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    vector<ll> s(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i]=a[i];
    }

    vector<ll> changed;
    vector<char> used(n,0);

    while(m--){
        ll idx,c;
        cin>>idx>>c;
        idx--;

        s[idx]+=c;

        if(!used[idx]){
            used[idx]=1;
            changed.push_back(idx);
        }

        if(s[idx]>h){

            for(int i : changed){
                s[i]=a[i];
                used[i]=0;
            }
            changed.clear();
        }
    }
    
    for(auto &x : s){
        cout<<x<<" ";
    }cout<<endl;

    
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