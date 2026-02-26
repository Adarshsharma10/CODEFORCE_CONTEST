#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int t = n;
    int k=1;
    for(int i=2;i*i<=t;i++){
        if(t%i==0){
            k*=i;
        }
        while(t%i==0){
            t=t/i;
        }
    }
    if(t>1){
        k=k*t;
    }
    cout<<k<<endl;
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

// Successfully SUbmitted