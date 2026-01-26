#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(auto &x : p) cin>>x;
    if(is_sorted(p.begin(), p.end(), greater<int>())){
        for(auto x : p){
            cout<<x<<" ";
        }cout<<endl;
        return;
    }

    int larg_idx = max_element(p.begin(),p.end())-p.begin();
    int larg = *max_element(p.begin(),p.end());
    int idx=0;
    if(larg_idx==0){
        for(int i=0;i<n;i++){
            if(p[i]==larg--){
                idx=i;
                continue;
            }
            else{
                idx++;
                break;
            }
        }
        int l = max_element(p.begin()+idx,p.end())-p.begin();
        reverse(p.begin() + idx, p.begin() + l + 1);
    }
    else{
        for(int i=0;i<=larg_idx/2;i++){
            swap(p[i],p[larg_idx-i]);
        }
    }
    for(auto x : p){
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
    