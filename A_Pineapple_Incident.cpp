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
    int t, s, x;
    cin >> t >> s >> x;
    // 3 8 51
    // t,t+s,t+s+1,t+2s,t+2s+1
    if (t == x)
        yep;
    else
        for (int i = 1; i <= mod; i++)
        {
            if (x == t + s * i)
            {
                yep;
                break;
            }
            else if (x == t + s * i + 1)
            {
                yep;
                break;
            }
            else if (x < t + s * i)
            {
                nope;
                break;
            }
        }
}