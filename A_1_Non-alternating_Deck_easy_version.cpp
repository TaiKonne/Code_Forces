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

void solve()
{
    int n;
    cin >> n;
    int cnt1 = 1, cnt2 = 0;
    int s = 1;
    int step = 1;
    for (int i = 2; s <= n; i++, step++)
    {
        if (s < n)
        {
            if (step % 2 != 0)
            {
                if (s + i + i + 1 <= n)
                {
                    cnt2 += (i + i + 1);
                }
                else if (s + i <= n)
                {
                    cnt2 += i;
                }
                else
                {

                    break;
                }
                s += cnt2;
                // cout << n sp << s nl;
            }
            else
            {
                if (s + i + i + 1 <= n)
                {
                    cnt1 += (i + i + 1);
                }
                else if (s + i <= n)
                {
                    cnt1 += i;
                }
                else
                {
                    break;
                }
                s += cnt1;
                // cout << n sp << s nl;
            }
        }
        else
        {
            // cout << n sp << s nl;
            break;
        }
    }
    cout << cnt1 sp << cnt2 sp << s nl;
    /*
    2 3
    4 5
    6 7
    1 2 3 4 5 6 7 8 9 10
    1 3 6 10 15 21 18 26 35 45
    */
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