// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define all(v) (v).begin(), (v).end()

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int ans = 1;
//     int cnt = count(s.begin(), s.end(), '1');
//     if (cnt == n)
//     {
//         cout << 0 << endl;
//     }
//     else
//     {
//         while (true)
//         {
//             string t;
//             t = s.back() + s.substr(0, s.size() - 1);
//             for (int i = 0; i < n; i++)
//             {
//                 if (t[i] == '1' && s[i] == '0')
//                 {
//                     s[i] = '1';
//                     int cnt = count(s.begin(), s.end(), '1');
//                     if (cnt == n)
//                     {
//                         cout<<ans<<endl;
//                         return;
//                     }
//                 }
//             }
//             ans++;
//         }
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s+s;
    int cnt = count(s.begin(), s.end(), '1');
    if (cnt == n)
    {
        cout << 0 << endl;
        return;
    }
    int max_gap = 0;
    int cur = 0;
    for(int i=0;i<2*n;i++){
        if(t[i]=='0'){
            cur++;
        }
        else{
            max_gap=max(cur,max_gap);
            cur=0;
        }
    }
    cout<<max_gap<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// Successfully submitted