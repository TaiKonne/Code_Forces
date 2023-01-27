#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void binary(int n, int k)
{
    int fl = 0;
    int l = 1, r = INT_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (k <= mid - mid / n)
        {
            fl = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << fl nl;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    binary(n, k);
    /*
    1 2 3| 4 5 6| 7 8 9| 10
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