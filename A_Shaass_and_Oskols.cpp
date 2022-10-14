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

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        // y--;
        x--;

        int fly_right = a[x] - y;
        int fly_left = a[x] - fly_right - 1;
        a[x] = 0;
        if (x + 1 < n)
            a[x + 1] += fly_right;
        if (x - 1 >= 0)
            a[x - 1] += fly_left;
        // 1 2 3 4 5 6 7 8 9 10
    }
    fat(x, a) cout << x nl;
}