#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,h,k;
    cin>>n>>h>>k;
    ll sum=0;
    vector<int> a(n);
    for(auto &x : a){
        cin>>x;
        sum+=x;
    }
    int sec=0;
    if(sum<h){
        int idx=max_element(a.begin(),a.end())-a.begin();
        int mini=a[0]+a[idx];
        for(int i=1;i<idx;i++){
            if(a[i]+a[idx]<mini){
                mini=a[i]+a[idx];
            }
        }
        int element = mini-a[idx];
        auto it = find(a.begin(),a.end(),element)-a.begin();
        swap(a[it],a[idx]); 
        
        int cycle = h/sum;
        sec+=n*cycle;  //whole cycle time 
        h-=cycle*sum;
        if(h%sum==0){
            cycle--;
        }
        sec+=cycle*k; // reload time
        for(int i=0;i<n;i++){
            int op=h-a[i];
            if(op>=0){
                sec++;
                h-=a[i];
            }
        }
        cout<<sec<<endl;
    }
    else if(sum>h){
        int idx=max_element(a.begin(),a.end())-a.begin();
        int mini=a[0]+a[idx];
        for(int i=1;i<idx;i++){
            if(a[i]+a[idx]<mini){
                mini=a[i]+a[idx];
            }
        }
        int element = mini-a[idx];
        auto it = find(a.begin(),a.end(),element)-a.begin();
        swap(a[it],a[idx]);
        for(int i=0;i<n;i++){
            if(h>=0){
                sec++;
            }
            h-=a[i];
        }
        cout<<sec<<endl;

    }
    else{
        cout<<n<<endl;
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