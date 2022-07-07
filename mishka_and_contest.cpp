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
    int n, k;
    cin >> n >> k;

    vti a(n);
    fat(x, a) cin >> x;

    int cnt = 0, cnt1 = 0;
    int x = 0;
    fr(i, 0, a.sz - 1)
    {
        if (a[i] <= k)
        {
            cnt++;
            x++;
        }
        else if (a[i] > k)
        {
            break;
        }
    }

    fl(i, a.sz - 1, x + 1)
    {
        if (a[i] <= k)
        {
            cnt++;
        }
        else if (a[i] > k)
        {
            break;
        }
    }
    // fr(i, 0, a.sz - 1)
    // {
    //     cout << a[i] space;
    // }

    cout << cnt;
}