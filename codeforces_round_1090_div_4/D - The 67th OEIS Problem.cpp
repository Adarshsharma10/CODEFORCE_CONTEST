#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


bool is_prime[1000001];
vector<ll> pri;

void prime(){
    for(int i=2;i<=1000000;i++){
        is_prime[i]=true;
    }
    for(int p=2;p*p<=1000000;p++){
        if(is_prime[p]){
            for(int i=p*p;i<=1000000;i+=p){
                is_prime[i]=false;
            }
        }
    }

    for(int i=2; i<=1000000; i++){
        if(is_prime[i]) pri.push_back(i);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prime();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<pri[i]*pri[i+1]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Successfully Submitted