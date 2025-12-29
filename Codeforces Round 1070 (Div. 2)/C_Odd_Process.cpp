#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    vector<ll> o,e;
    for(ll i = 0;i<n;i++){
        if(v[i]&1){
            o.push_back(v[i]);
        }
        else{
            e.push_back(v[i]);
        }
    }
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    
    if(e.size()==n){
        for(int i=0;i<n;i++){
            cout<<0<<" ";
        }cout<<endl;
        return;
    }
    if(o.size()==n){
        for(int i=0;i<n;i++){
            if(i&1){
                cout<<0<<" ";
            }
            else{
                cout<<o.back()<<" ";
            }
        }cout<<endl;
        return;
    }

    ll score = o.back();
    vector<ll> ans(n);
    ans[0]=score;
    for(ll i = 1;i<n;i++){
        if(e.size()==0){
            ans[i]=ans[i-2];
        }
        else{
            ans[i]=ans[i-1]+e.back();
            e.pop_back();
        }
    }
    if (!(accumulate(v.begin(), v.end(), 0LL) & 1)) {
        ans[n-1] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";

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

// Successfully submitted