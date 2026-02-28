#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,x,y;
    cin >>n>>x>>y;
    vector<int> p;
    for(auto &x : p){
        cin>>x;
    }
    int mini=INT_MAX;
    int min_idx;
    for(int i=x;i<y;i++){
        if(mini>p[i]){
            mini=p[i];
            min_idx=i;
        }
    }
    vector<int> store;
    int m = y-x;
    for(int i=0;i<m;i++){
        store.push_back(p[(min_idx+i)%m]);
    }

    int l_idx = max_element(p.begin(),p.begin()+x-1)-p.begin();
    int l = *max_element(p.begin(),p.begin()+x-1);
    deque<int> left(p.begin(),p.begin()+x-1);
    if(l>mini){
        for(int i=l_idx;i<x;i++){

        }
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