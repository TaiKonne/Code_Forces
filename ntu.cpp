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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    vti a(100001);
    fr(i, 1, 100001)
    {
        a[i] = -1;
    }
    int n;
    cin >> n;
    int Max = 0;
    int fl = 1;
    wh(n--)
    {
        int l, r;
        cin >> l >> r;
        fr(i, l, r)
        {
            a[i] = fl;
        }
        fl++;
        Max = max({r, l, Max});
    }
    // cout << Max;
    fr(i, 1, Max + 1)
    {
        cout << a[i] space;
    }
}