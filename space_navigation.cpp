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
    int t;
    cin >> t;
    wh(t--)
    {
        int x, y;
        cin >> x >> y;
        string a;
        cin >> a;
        int u = 0, d = 0, r = 0, l = 0;
        fr(i, 0, a.sz - 1)
        {
            if (a[i] == 'U')
                u++;
            else if (a[i] == 'D')
                d--;
            else if (a[i] == 'R')
                r++;
            else
                l--;
        }
        int slr = r - l;
        int sud = u - d;

        if (x >= 0 && y >= 0) // x>0 y>0
        {
            if (r >= x && u >= y)
                yep;
            else
                nope;
        }
        else if (x <= 0 && y >= 0) // x<0 y>y
        {
            if (l <= x && u >= y)
                yep;
            else
                nope;
        }
        else if (x <= 0 && y <= 0) // x<0 y<0
        {
            if (l <= x && d <= y)
                yep;
            else
                nope;
        }
        else if (x >= 0 && y <= 0) // x>0 y<0
        {
            if (r>=x&&d<=y)
                yep;
            else
                nope;
        }
    }
}