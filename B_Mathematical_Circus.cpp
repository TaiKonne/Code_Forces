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
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, k;
    cin >> n >> k;
    int fl1 = ((1 + k) * 2);
    int fl2 = ((2 + k) * 1);
    if (fl1 % 4 == 0 || fl2 % 4 == 0)
    {
        yep;
        int m = 0;
        int l = 1, r = 2;
        wh(m < n/2)
        {
            int fl1 = ((l + k) * r);
            int fl2 = ((r + k) * l);
            if (fl1 % 4 == 0)
            {
                cout << l space << r nl;
            }
            else
            {
                cout << r space << l nl;
            }
            l += 2;
            r += 2;
            m++;
        }
    }
    else
    {
        nope;
        return;
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