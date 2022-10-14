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

int binary_left(vti &a, int x)
{
    int l = -1, r = a.sz;
    int Mid;
    wh(l + 1 < r)
    {
        Mid = (l + r) / 2;
        if (x >= a[Mid])
        {
            l = Mid;
        }
        else
        {
            r = Mid;
        }
    }
    return l + 1;
}

int main()
{
    fast_out();
    int n, k;
    cin >> n >> k;
    vti a(n);

    fat(x, a) cin >> x;

    wh(k--)
    {
        int x;
        cin >> x;
        cout << binary_left(a, x) nl;
    }
}