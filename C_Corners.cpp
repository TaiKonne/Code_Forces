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

void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n + 2][m + 2];
    int cnt1 = 0, cnt0 = 0;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cin >> a[i][j];
            if (a[i][j] == '0')
                cnt0++;
            else
                cnt1++;
        }
    }
    if (cnt0 == n * m)
    {
        cout << 0 nl;
        return;
    }
    else if (cnt1 == n * m)
    {
        int s = m * n;
        cout << s - 2 nl;
        return;
    }
    fr(i, 0, n + 1)
    {
        a[i][0] = '?';
        a[i][m + 1] = '?';
    }
    fr(i, 0, m + 1)
    {
        a[0][i] = '?';
        a[n + 1][i] = '?';
    }
    int fl1 = 0;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {

            if (a[i][j] == '0' && (a[i - 1][j] == '0' || a[i + 1][j] == '0' || a[i][j + 1] == '0' || a[i][j - 1] == '0' || a[i - 1][j + 1] == '0' || a[i - 1][j - 1] == '0' || a[i + 1][j - 1] == '0' || a[i + 1][j + 1] == '0'))
            {
                fl1 = 1;
                break;
            }
        }
        if (fl1 == 1)
        {
            break;
        }
    }
    int s = m * n;
    if (fl1 == 0)
    {
        cout << cnt1 - 1 nl;
    }
    else
    {
        cout << cnt1 nl;
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