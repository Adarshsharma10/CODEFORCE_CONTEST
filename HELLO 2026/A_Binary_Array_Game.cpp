#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int z=0,o=0;
    for(auto &x : v){
        cin>>x;
        if(x==0){
            z++;
        }
        else{
            o++;
        }
    }
    if(v.front() == 1 || v.back() == 1){
        cout << "ALICE" << endl;
    }
    else {
        cout << "BOB" << endl;
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

// SUccessfully Submitted
    
   
