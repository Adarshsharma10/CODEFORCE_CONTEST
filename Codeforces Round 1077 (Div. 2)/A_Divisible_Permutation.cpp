#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int s = n;
    vector<int> v;
    v.push_back(n);
    bool flag1 =true,flag2 = true;
    for(int i=n-1;i>0;i--){
        if(flag1){
            v.push_back(s-i);
            s=s-i;
            flag1=false;
        }
        else{
            v.push_back(s+i);
            s=s+i;
            flag1=true;
        }
    }
    reverse(all(v));
    for(auto &x : v){
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