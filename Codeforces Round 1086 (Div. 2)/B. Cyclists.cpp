#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    int win_cost = v[p-1];
    int win_idx=p-1;
    while(m>0){
        if(win_idx<=k-1){
            if(m-win_cost<0){
                break;
            }
            ans++;
            m-=win_cost;
            int store=v[win_idx];
            v.erase(v.begin()+win_idx);
            v.push_back(store);
            win_idx=n-1;
        }
        else{
            int min_elem_idx = min_element(v.begin(),v.begin()+k)-v.begin();
            int min_store = v[min_elem_idx];
            if(m-min_store<0){
                break;
            }
            v.erase(v.begin()+min_elem_idx);
            v.push_back(min_store);
            m-=min_store;
            win_idx--;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Successfully submitted