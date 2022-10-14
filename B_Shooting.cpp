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
    int n;
    cin >> n;
    vti a(n);
    vti b;
    fat(x, a)
    {
        cin >> x;
        b.pb(x);
    }
    sort(rall(a));
    int cnt_take_down = 0;
    int total_shot = 0;
    fr(i, 0, a.sz - 1)
    {
        total_shot += (a[i] * cnt_take_down) + 1;
        cnt_take_down++;
    }
    cout << total_shot nl;

    fr(i, 0, a.sz - 1)
    {
        fr(j, 0, b.sz - 1)
        {
            if (a[i] == b[j])
            {
                cout << j + 1 space;
                b[j] = -1;
            }
        }
    }
}