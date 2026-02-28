#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    // vector<int> freq(26,0);
    // for(char c : s){
    //     freq[c-'a']++;
    // }
    // for(int i=0;i<26;i++){
    //     if(freq[i]&1){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    stack<char> st;

    for(int i = 0; i < n; i++) {
        if(!st.empty() && st.top() == s[i]) {
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }
    if(st.size()==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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