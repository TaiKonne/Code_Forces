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
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        vti a(n + 1);

        fr(i, 1, n)
        {
            cin >> a[i];
        }
        int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
        fr(i, 1, n)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 1)
                    f1 = 1;
                else
                    f2 = 1;
            }
            else
            {
                if (a[i] % 2 == 1)
                    f3 = 1;
                else
                    f4 = 1;
            }
        }

        if (f1 && f2)
            nope;
        else if (f3 && f4)
            nope;
        else
            yep;
        // cout nl;
    }
}