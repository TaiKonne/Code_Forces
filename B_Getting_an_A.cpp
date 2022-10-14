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
    double n;
    cin >> n;
    vti a;
    double s = 0;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        a.pb(z);
        s += z;
    }
    double div = s / n;
    sort(all(a));

    int cnt = 0;
    wh(div < 4.5)
    {
        cnt++;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 5)
            {
                s += (5 - a[i]);
                a[i] = 5;
                break;
            }
        }
        div = s / n;
    }
    cout << cnt;
}