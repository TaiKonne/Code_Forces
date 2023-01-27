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
// Leave Today for a Better Tomorrow

void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    memset(a, 0, sizeof(a));
    int step = 0;
    int s = n * n;
    int s1 = 1;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    a[i][j] = s;
                    s--;
                }
                else
                {
                    a[i][j] = s1;
                    s1++;
                }
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (j % 2 != 0)
                {
                    a[i][j] = s;
                    s--;
                }
                else
                {
                    a[i][j] = s1;
                    s1++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] sp;
        cout nl;
    }

    /*
    9 2 6
    1 7 4
    8 3 5
    ------
    9 1 8
    3 7 2
    6 4 5
    0 1 2 3 4 5 6 7 8
    9 1 8 3 7 2 6 4 5
    ------
    1 2 3 4 5 6 7 8 9
    ------
    9 2 7
    9 1 8
    2 6 4
    2 7 5
    6 4 2
    1 8 7
    1 7 6
    7 3 4
    7 4 3
    4 5 1
    */
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