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

int main()
{
    fast_out();
    ll n;
    cin >> n;
    vtll a(n);
    fat(x, a) cin >> x;

    sort(all(a));
    ll cnt1 = 0, cnt2 = 0;
    ll s1 = a[n - 1] - a[0];
    ll s2;
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
            cnt1++;
        if (a[n - 1] == a[i])
            cnt2++;
    }
    if (cnt1 == n)
    {
        s2 = (s1 * (s1 - 1)) / 2;
    }
    else
        s2 = (cnt1 * cnt2);
    cout << s1 sp << s2;
}