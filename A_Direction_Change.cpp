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

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m && n == 1)
    {
        cout << 0 nl;
        return;
    }
    else if (m == 1 && m + 1 == n)
    {
        cout << n - 1 nl;
        return;
    }
    else if (n == 1 && n + 1 == m)
    {
        cout << m - 1 nl;
        return;
    }
    else if (n == 1 && m > 2 || n > 2 && m == 1)
    {
        cout << -1 nl;
        return;
    }
    int x = 0, y = 0;
    if (n < m)
        swap(n, m);
    m--;
    n--;
    if (m == n)
    {
        cout << m + n nl;
    }
    else
    {
        int s = n - m;
        cout << m * 2 + s*2 - s%2 nl;
    }
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