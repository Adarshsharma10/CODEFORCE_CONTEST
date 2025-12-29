#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int arr[n][n];
    int l = n * n;
    int one = l-n;
    int two = one - 1;
    int three  = two -1;
    int four = l -1;
    int five = two - n;
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2){
        cout<<9<<endl;
    }
    else if(n==3){
        cout<<29<<endl;
    }
    else if(n==4){
        cout<<56<<endl;
    }
    else{
        cout<<one+two+three+four+five<<endl;
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