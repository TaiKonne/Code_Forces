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

void solve()
{
    int n;
    cin >> n;

    vti a(n);
    fat(x, a) cin >> x;
    // nếu ko tưới 2 ngày hoa chết mẹ mày rồi con
    // nếu được tưới trong i ngày nó phát triển 1cen
    // nếu được tưới trong i-1 D nó sẽ tăng 5cen
    // nếu ko tưới trong i ngày nó sẽ ko tăng
    int grow = 1;
    int die = 0;

    if (a[0] == 1)
        grow++;
    fr(i, 1, a.sz - 1)
    {
        if (a[i] == 0)
        {
            if (a[i] == a[i - 1])
            {
                cout << -1 nl;
                return;
            }
        }
        else
        {
            if (a[i] == a[i - 1])
                grow += 5;
            else
                grow++;
        }
    }

    cout << grow nl;
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