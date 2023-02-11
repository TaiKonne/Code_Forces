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
// Leave Today for a Better Tomorrow

int main()
{
    fast_out();
    int a, b, c, d;
    char h;
    cin >> a >> h >> b;
    string fl1 = to_string(a);
    string fl2 = to_string(b);
    reverse(all(fl2));
    if (fl1 == fl2)
    {
        cout << 0;
        return 0;
    }
    else
    {
        int cnt = 0;
        while (true)
        {
            // cout << a << ":" << b nl;
            cnt++;
            b++;
            if (a == b / 10 && b > 9)
            {
                cout << cnt;
                return 0;
            }
            fl1 = to_string(a);
            fl2 = to_string(b);
            if (fl2 == fl1)
            {
                cout << cnt;
                return 0;
            }
            reverse(all(fl2));
            if (fl2 == fl1)
            {
                cout << cnt;
                return 0;
            }
            if (b > 59)
            {
                b = 0;
                a++;
                if (a == b / 10 && b > 9)
                {
                    cout << cnt;
                    return 0;
                }
                if (a > 23)
                {
                    a = 0;
                }
                fl1 = to_string(a);
                fl2 = to_string(b);
                if (fl2 == fl1)
                {
                    cout << cnt;
                    return 0;
                }
                reverse(all(fl2));
                if (fl2 == fl1)
                {
                    cout << cnt;
                    return 0;
                }
            }
        }
    }
}