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
    int n;
    cin >> n;
    int s = 0, cnt1 = 0, fl = 0;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
        if (x == 1)
        {
            cnt1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            s++;
        }
        else
            s--;
        fl = max(fl, s);
        if (s < 0)
            s = 0;
    }
    if (cnt1 == n)
        cout << n - 1;
    else
    {
        cout << cnt1 + fl;
    }
}