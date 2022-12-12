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
    int n, s;
    cin >> n >> s;
    vti a(n);
    fat(x, a) cin >> x;
    // 1 coc rong
    // co n coc
    // co n-1 nguoi ban
    // neu các cốc nước đổ vào 1 ly có thể tích lớn hơn s
    // thì no ngược lại thì yes
    sort(all(a));
    int s1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s1 += a[i];
    }
    if (s1 > s)
        nope;
    else
        yep;
}