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
    int n, m;
    cin >> n >> m;
    vti a(m);
    fat(x, a) cin >> x;

    sort(all(a));
    int fl = 0, fl2 = a[0], z = 0;
    fr(i, 0, n - 1)
    {
        fl += fl2;
        fl2--;
        if (fl2 == 0)
        {
            z++;
            fl2 = a[z];
        }
    }

    sort(rall(a));
    int Max = 0;
    wh(n--)
    {
        Max += a[0];
        a[0]--;
        fr(i, 1, m - 1)
        {
            if (a[i] <= a[i - 1])
            {
                break;
            }
            swap(a[i], a[i - 1]);
        }
    }

    cout << Max sp << fl;
}