#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int c0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
    }
    if(is_sorted(s.begin(),s.end())){
        cout<<"Bob"<<endl;
        return;
    }
    vector<int> idx;
    for(int i=0;i<c0;i++){
        if(s[i]=='1'){
            idx.push_back(i+1);
        }
    }
    for(int i=c0;i<n;i++){
        if(s[i]=='0'){
            idx.push_back(i+1);
        }
    }
    cout<<"Alice"<<endl;
    cout<<idx.size()<<endl;
    for(int i=0;i<idx.size();i++){
        cout<<idx[i]<<" ";
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