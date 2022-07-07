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

    int cnt = 0;
    fr(i, 1, n)
    {
        cnt = 0;
        fr(j, 1, m)
        {
            if (a[i][j] == '.')
                cnt++;
        }
        if (cnt == m)
        {
            fr(j, 1, m)
            {
                a[i][j] = '0';
            }
        }
    }

    int cnt1 = 0;
    fr(i, 1, m)
    {
        cnt1 = 0;
        fr(j, 1, n)
        {
            if (a[j][i] == '.' || a[j][i] == '0')
                cnt1++;
        }
        if (cnt1 == n)
        {
            fr(j, 1, n)
            {
                a[j][i] = '0';
            }
        }
    }
    int cnt2 = 0;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            if (a[i][j] == '0')
                cnt2++;
        }
    }
    cout << cnt2;
}