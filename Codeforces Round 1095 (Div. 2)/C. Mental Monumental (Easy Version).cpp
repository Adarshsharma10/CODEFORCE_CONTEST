#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool check(int mid, vector<int> &v, int n)
{
    vector<bool> valid(1e6 + 1, false);
    vector<int> extra;
    for (auto x : v)
    {
        if (x < mid && !valid[x])
        {
            valid[x] = true;
        }
        else
            extra.push_back((x - 1) / 2);
    }
    int tar = 0;
    while (valid[tar])
        tar++;

    for (auto rem : extra)
    {
        if (rem >= tar)
        {
            valid[tar] = true;
            tar++;
        }
        while (valid[tar])
            tar++;
    }

    return tar >= mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        int l = 0, h = n;
        int ans = 0;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (check(mid, v, n))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}

//Successfylly Submitted