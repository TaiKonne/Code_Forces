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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    int n, m;
    cin >> n >> m;

    vti a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        a[i] = -1;
    }

    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        for (int j = z;a[j] == -1; j++)
        {
            a[j] = z;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] sp;
    }
}