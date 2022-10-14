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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void taikon()
{
    int n, m;
    cin >> n >> m;
    char a[n + 2][m + 2];
    char b[n + 2][m + 2];
    fr(i, 0, n - 1)
    {
        fr(j, 0, m - 1)
        {
            a[i][j] = 'R';
        }
    }
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            if (a[i][j] == 'R')
            {
                a[i + 1][j] = 'W';
                a[i - 1][j] = 'W';
                a[i][j + 1] = 'W';
                a[i][j - 1] = 'W';
            }
        }
    }

    fr(i, 0, n - 1)
    {
        fr(j, 0, m - 1)
        {
            b[i][j] = 'W';
        }
    }
    fr(i, 1, n-1)
    {
        fr(j, 1, m-1)
        {
            if (a[i][j] == 'W')
            {
                a[i + 1][j] = 'R';
                a[i - 1][j] = 'R';
                a[i][j + 1] = 'R';
                a[i][j - 1] = 'R';
            }
        }
    }
    int flw = 0, flw1 = 0, flr = 0, flr1 = 0;
    char c[n + 2][m + 2];
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cin >> c[i][j];
            if (c[i][j] == 'W')
            {
                flw = i;
                flw1 = j;
            }
            else if (c[i][j] == 'R')
            {
                flr = i;
                flr1 = j;
            }
        }
    }
    // if (c[flw][flw1] == a[flw][flw1] && c[flr][flr1] == a[flr][flr1])
    // {
    yep;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cout << a[i][j];
        }
        cout nl;
    }
    // }
    // else if (c[flw][flw1] == b[flw][flw1] && c[flr][flr1] == b[flr][flr1])
    // {
    yep;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cout << b[i][j];
        }
        cout nl;
    }
    // }
    // else
    //     nope;
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        taikon();
    }
}