#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    unordered_map<int,int> cnt;

    for(int i = 0; i < n*n; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }

    for(auto &p : cnt){
    int c = p.first;
    int f = p.second;

    if(f > n*(n-1)){
        cout << "NO\n";
        return;
    }
}

    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}