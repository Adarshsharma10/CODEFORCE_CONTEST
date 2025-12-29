#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll m = a[0];
    ll answ = m;
    ll minu = LLONG_MAX;
    for (int i = 1; i < n; i++)
    {
        ll s = a[i];
        ll u1 = (s + 1) / 2;
        ll u2 = s - m;
        ll Q = max(u1, u2);
        minu = min(minu, Q);
    }
    ll sol = min(minu, a[1]);
    answ = max(answ, sol);
    cout << answ << endl;
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