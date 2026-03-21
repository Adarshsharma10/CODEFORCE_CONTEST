#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll a,b,c,m;
    cin >>a>>b>>c>>m;

    ll alice=0;
    ll bob=0;
    ll carol=0;
    
    alice = m/a;
    bob = m/b;
    carol = m/c;

    ll lcm_ab = (a/__gcd(a,b))*b;
    ll lcm_bc = (b/__gcd(b,c))*c;
    ll lcm_ac = (a/__gcd(a,c))*c;
    ll lcm_abc = (lcm_ab/__gcd(lcm_ab,c))*c;

    ll inter_ab = m/lcm_ab;
    ll inter_bc = m/lcm_bc;
    ll inter_ac = m/lcm_ac;
    ll inter_abc = m/lcm_abc;

    ll a_water = alice*6 - inter_ab*3 - inter_ac*3 + inter_abc*2;
    ll b_water = bob*6 - inter_ab*3 - inter_bc*3 + inter_abc*2;
    ll c_water = carol*6 - inter_ac*3 - inter_bc*3 + inter_abc*2;

    cout<<a_water<<" "<<b_water<<" "<<c_water<<endl;
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