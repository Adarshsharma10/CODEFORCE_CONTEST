#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll counts[3];
    char colors[3] = {'R', 'G', 'B'};
    cin >> counts[0] >> counts[1] >> counts[2];

    string s = "";
    while (true)
    {
        int b_i = -1;

        for (int i = 0; i < 3; i++)
        {
            if (counts[i] <= 0)
                continue;

            int n = s.length();
            bool f1 = (n < 1 || s[n - 1] != colors[i]);
            bool f2 = (n < 3 || s[n - 3] != colors[i]);

            if (f1 && f2)
            {
                if (b_i == -1)
                {
                    b_i = i;
                }
                else
                {
                    if (counts[i] > counts[b_i])
                    {
                        b_i = i;
                    }
                    else if (counts[i] == counts[b_i])
                    {
                        if (n >= 2 && s[n - 2] == colors[i])
                        {
                            b_i = i;
                        }
                    }
                }
            }
        }

        if (b_i == -1)
            break;

        s += colors[b_i];
        counts[b_i]--;
    }
    cout << s << endl;
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