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
    int n;
    cin >> n;
    vti a(n);
    fat(x, a) cin >> x;
    fr(i, 0, n - 1)
    {
        if (i == 0)
        {
            cout << a[1] - a[0] << " " << a[n - 1] - a[0] nl;
        }
        else if (i == n - 1)
        {
            cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] nl;
        }
        else
        {
            cout << min(a[i + 1] - a[i], a[i] - a[i - 1]) << " " << max(a[i] - a[0], a[n - 1] - a[i]) nl;
        }
    }
}