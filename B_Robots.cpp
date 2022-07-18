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
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];

    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cin >> a[i][j];
        }
    }
    int fl = 0;
    int x = 0, y = 0, x1 = 0, y1 = 0;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {

            if (a[i][j] == 'R' && fl == 0)
            {
                x = i;
                y = j;
                fl++;
            }
        }
    }
    if (x != 0)
        x--;
    if (y != 0)
        y--;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            if (a[i][j] == 'R')
            {
                if (i - x <= 0 || j - y <= 0)
                {
                    nope;
                    return;
                }
            }
        }
    }
    yep;
    return;
    // 1 1
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}