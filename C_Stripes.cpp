#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    string a[8];

    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    int r = 0;
    int b = 0;
    int fl1 = 0;
    for (int i = 0; i < 8; i++)
    {
        r = 0;
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j] == 'R')
            {
                r++;
            }
        }
        if (r++ == 8)
        {
            cout << 'R' nl;
            fl1 = 1;
            break;
        }
    }
    if (!fl1)
    {
        for (int i = 0; i < 8; i++)
        {
            b = 0;
            for (int j = 0; j < 8; j++)
            {
                if (a[j][i] == 'B')
                {
                    b++;
                }
            }
            if (b == 8)
            {
                cout << 'B' nl;
                break;
            }
        }
    }
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}