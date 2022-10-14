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
    
void solve()
{
    string z = "Vivek";
    string zz = "Ashish";
    int n, m;
    cin >> n >> m;

    int a[n + 1][m + 1];
    int cnt = 0;
    set<int> r;
    set<int> c;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                r.insert(i);
                c.insert(j);
            }
        }
    }

    int Min = n - r.sz;
    int Min1 = m - c.sz;

    if (min(Min, Min1) % 2 == 0)
        cout << z nl;
    else
        cout << zz nl;
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