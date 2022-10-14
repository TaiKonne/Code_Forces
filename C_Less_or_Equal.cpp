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

int main()
{
    fast_out();
    int n, k;
    cin >> n >> k;
    vti a(n);
    fat(x, a) cin >> x;
    sort(all(a));
    // 1 3 3 5
    // 1 3 3 5 7 10 20

    if (k == 0)
    {
        if (a[0] == 1)
            cout << -1 nl;
        else
        {
            cout << a[0] - 1 nl;
        }
    }
    else if (a[k] == a[k - 1] || k == 0)
    {
        cout << -1 nl;
    }
    else
    {
        cout << a[k - 1] nl;
    }

}