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
string l = "Limak";
string r = "Radewoosh";
string t = "Tie";
int main()
{
    fast_out();
    int n, m;
    cin >> n >> m;
    vti a(n);
    vti b(n);
    fat(x, a) cin >> x;
    fat(x, b) cin >> x;

    vti b1, b2;
    b1.pb(b[0]);
    b2.pb(b[n - 1]);
    for (int i = 1; i < n; i++)
    {
        b1.pb(b1[i - 1] + b[i]);
        b2.pb(b2[i - 1] + b[n - i - 1]);
    }

    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 = s1 + max(0, a[i] - m * b1[i]);
        s2 = s2 + max(0, a[n - i - 1] - m * b2[i]);
    }
    // cout << s1 sp << s2;
    if (s1 > s2)
    {
        cout << l;
    }
    else if (s1 == s2)
    {
        cout << t;
    }
    else
        cout << r;
    // x là tại thời điểm giải
    // c là hằng số
    // 2 thằng giải ngược nhau thời gian tại thời thời điểm giải khác nhau prefixsum để lấy tại thời điểm đó
}