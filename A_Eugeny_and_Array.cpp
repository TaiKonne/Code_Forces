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
    int n, m;
    cin >> n >> m;
    vti a(n);
    int cnt1 = 0, cnt2 = 0;
    fat(x, a)
    {
        cin >> x;
        if (x == -1)
            cnt1++;
        else
            cnt2++;
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        if (r == l)
            cout << 0;
        else
        {
            if ((r - l + 1 <= min(cnt1, cnt2) * 2) && (r - l + 1) % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout nl;
    }
}