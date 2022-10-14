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
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
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

    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            if (a[i][j] == '.')
            {
                if (i % 2 != 0)
                {
                    if (j % 2 != 0)
                    {
                        a[i][j] = 'B';
                    }
                    else
                    {
                        a[i][j] = 'W';
                    }
                }
                else
                {
                    if (j % 2 != 0)
                    {
                        a[i][j] = 'W';
                    }
                    else
                    {
                        a[i][j] = 'B';
                    }
                }
            }
            cout << a[i][j];
        }
        cout nl;
    }
}