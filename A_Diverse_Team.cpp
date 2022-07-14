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
    int n, k;
    cin >> n >> k;
    vti a(n);
    set<int> b;
    vti c;
    fat(x, a)
    {
        cin >> x;
        b.insert(x);
    }
    vti d;
    if (b.sz >= k)
    {
        yep;
        fr(i, 0, a.sz - 1)
        {
            int cnt = count(all(c), a[i]);
            if (cnt == 0)
            {
                c.pb(a[i]);
                d.pb(i + 1);
            }
        }
        fr(i, 0, k-1)
        {
            cout << d[i] space;
        }
        cout nl;
    }
    else
    {
        nope;
    }
}