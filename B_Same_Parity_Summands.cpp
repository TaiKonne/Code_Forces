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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n - k + 1 > 0 && (n - k + 1) % 2 != 0)
    {

        yep;
        for (int i = 0; i < k - 1; i++)
            cout << 1 sp;
        cout << n - k + 1 nl;
    }
    else if (n - 2 * (k - 1) > 0 && (n - 2 * (k - 1)) % 2 == 0)
    {

        yep;
        for (int i = 0; i < k - 1; i++)
            cout << 2 sp;
        cout << n - 2 * (k - 1) nl;
    }
    else
        nope;
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