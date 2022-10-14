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
    int n;
    cin >> n;
    int s = n;
    vti a;
    if (n <= 9)
    {
        cout << n nl;
        return;
    }
    for (int i = 9; i >= 1; i--)
    {
        s -= i;
        if (s >= 0)
        {
            // cout << i sp;
            a.pb(i);
        }
        else if (s < 0)
        {
            s += i;
            a.pb(s);
            break;
        }
    }
    if (a[a.sz - 1] == 0)
    {
        a.pop_back();
    }
    for (int i = a.sz - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout nl;
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