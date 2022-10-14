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
    int n, m, k;
    cin >> n >> m;
    k = m;
    vti a(n);
    int Max = 0;
    int Min = 0;
    fat(x, a)
    {
        cin >> x;
        Max = max(x, Max);
    }
    if (n == 1)
    {
        int Max = a[0] + m;
        cout << Max space << Max;
        return 0;
    }
    sort(all(a));

    wh(m > 0)
    {
        int fl = 0;
        fr(i, 0, a.sz - 1)
        {
            if (a[i] < Max && m > 0)
            {
                m = m - a[i];
                a[i] = a[i] + (Max - a[i]);
                fl = 1;
            }
        }
        // sort(all(a));
        if (fl == 0)
            break;
    }

    // wh(m > 0)
    // {
    //     fr(i, 0, a.sz - 1)
    //     {
    //         m--;
    //         a[i]++;
    //         if (m == 0)
    //             break;
    //     }
    //     if (m == 0)
    //         break;
    // }
    sort(all(a));
    cout << m nl;
    fat(x, a) cout << x space;
    // cout << a[a.sz - 1] space << Max + k;
}