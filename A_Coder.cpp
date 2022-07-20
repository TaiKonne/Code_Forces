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

int main()
{
    int n;
    cin >> n;
    char a[n + 2][n + 2];
    fr(i, 0, n - 1)
    {
        fr(j, 0, n - 1)
        {
            a[i][j] = 'C';
        }
    }
    fr(i, 1, n)
    {
        fr(j, 1, n)
        {
            if (a[i][j] == 'C')
            {
                a[i + 1][j] = '.';
                a[i - 1][j] = '.';
                a[i][j + 1] = '.';
                a[i][j - 1] = '.';
            }
        }
    }
    int cnt = 0;
    fr(i, 0, n - 1)
    {
        fr(j, 0, n - 1)
        {
            if (a[i][j] == 'C')
            {
                cnt++;
            }
        }
    }
    cout << cnt nl;
    fr(i, 0, n - 1)
    {
        fr(j, 0, n - 1)
        {
            cout << a[i][j];
        }
        cout nl;
    }
}