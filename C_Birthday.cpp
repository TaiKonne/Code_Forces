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
    fast_out();
    int n;
    cin >> n;

    vti a(n + 1);
    fr(i, 1, n)
    {
        cin >> a[i];
    }
    vti b;
    sort(all(a));
    int Max = a[a.sz - 1];
    a.pop_back();
    int Mid = n / 2;
    b.pb(Max);
    int fl = 1;
    fl(i, a.sz - 1, 1)
    {
        if (fl % 2 != 0)
        {
            b.pb(a[i]);
            fl++;
        }
        else
        {
            b.insert(b.bg,a[i]);
            fl++;
        }
    }
    fat(x, b) cout << x space;
}