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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    ll n, m;
    cin >> n >> m;
    int cnt = 0;
    if (n == m)
    {
        cout << 0;
        return 0;
    }
    else if (m % n != 0)
    {
        cout << -1;
        return 0;
    }
    else
    {
        int x = m / n;
        wh(x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }
        wh(x % 3 == 0)
        {
            cnt++;
            x /= 3;
        }
        if (x != 1)
        {
            cout << -1;
            return 0;
        }
    }
    cout << cnt;
}