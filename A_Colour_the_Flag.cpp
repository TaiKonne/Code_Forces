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
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!

void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    char b[n][m];
    char c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
            c[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == '.')
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                        b[i][j] = 'W';
                    else
                        b[i][j] = 'R';
                }
                else
                {
                    if (j % 2 == 0)
                        b[i][j] = 'R';
                    else
                        b[i][j] = 'W';
                }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] == '.')
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                        c[i][j] = 'R';
                    else
                        c[i][j] = 'W';
                }
                else
                {
                    if (j % 2 == 0)
                        c[i][j] = 'W';
                    else
                        c[i][j] = 'R';
                }
        }
    }
    int fl1 = 0, fl2 = 0;
    if (n == 1 || m == 1)
    {
        if (m == 1)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (b[j][0] == b[j + 1][0])
                {
                    fl1 = 1;
                }
                if (c[j][0] == c[j + 1][0])
                {
                    fl2 = 1;
                }
            }
        }
        else
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (b[0][j] == b[0][j + 1])
                {
                    fl1 = 1;
                }
                if (c[0][j] == c[0][j + 1])
                {
                    fl2 = 1;
                }
            }
        }
        if (fl1 == 1 && fl2 == 1)
        {
            nope;
        }
        else
        {
            yep;
            if (fl1 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << b[i][j];
                    }
                    cout nl;
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        cout << c[i][j];
                    }
                    cout nl;
                }
            }
        }
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (c[i][j] == c[i][j + 1] || c[i][j] == c[i + 1][j])
            {
                fl2 = 1;
            }
            if (b[i][j] == b[i][j + 1] || b[i][j] == b[i + 1][j])
            {
                fl1 = 1;
            }
        }
    }
    if (fl1 == 1 && fl2 == 1)
    {
        nope;
    }
    else
    {
        yep;
        if (fl1 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << b[i][j];
                }
                cout nl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << c[i][j];
                }
                cout nl;
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