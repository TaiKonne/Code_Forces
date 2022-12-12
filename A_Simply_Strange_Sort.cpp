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
#define lli long long int
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vti a(n);
    fat(x, a) cin >> x;
    int cnt = 0;

    for (int i = 1; !is_sorted(all(a)); i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if ((j + 1) % 2 != 0 && a[j + 1] < a[j])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        else
        {
            for (int j = 0; j < n - 1; j++)
            {
                if ((j + 1) % 2 == 0 && a[j + 1] < a[j])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        cnt++;
    }

    cout << cnt nl;
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}