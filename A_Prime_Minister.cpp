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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!

int main()
{
    fast_out();
    int n;
    cin >> n;
    int s = 0;
    int fls = 0;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
        fls += x;
    }
    if (a[0] * 2 < fls / 2)
    {
        cout << 0;
        return 0;
    }
    else
    {
        if (a[0] == fls / 2)
        {
            cout << 2 nl;
            cout << 1 sp << 2;
            return 0;
        }
        else
        {
            s = a[0];
            vti b;
            for (int i = 1; s < (fls / 2); i++)
            {
                s += a[i];
                b.pb(i + 1);
            }
            cout << b.sz + 1 nl;
            cout << 1 sp;
            for (int i = 0; i < b.sz; i++)
                cout << b[i] sp;
        }
    }
}