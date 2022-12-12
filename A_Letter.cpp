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
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!

int main()
{
    fast_out();
    char a[50][50];
    int n, m;
    cin >> n >> m;
    int mi_i = 51, mx_i = -1, mi_j = 51, mx_j = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                mi_i = min(i, mi_i);
                mx_i = max(i, mx_i);
                mi_j = min(j, mi_j);
                mx_j = max(j, mx_j);
            }
        }
    }
    for (int i = mi_i; i <= mx_i; i++)
    {
        for (int j = mi_j; j <= mx_j; j++)
            cout << a[i][j];
        cout nl;
    }
}