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
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[500][500];
int n, m;
bool checks_w(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int ii = x + dx[i];
        int jj = y + dy[i];
        // cout << ii sp << jj nl;
        // cout << a[ii][jj] sp;
        if (a[ii][jj] == 'S' && ii < n && ii >= 0 && jj >= 0 && jj < m)
        {
            return true; // sói gần cừu
        }
    }
    for (int i = 0; i < 4; i++)
    {
        int ii = x + dx[i];
        int jj = y + dy[i];
        // cout << ii sp << jj nl;
        // cout << a[ii][jj] sp;
        if (a[ii][jj] == '.' && ii < n && ii >= 0 && jj >= 0 && jj < m)
        {
            a[ii][jj] = 'D';
        }
    }
    return false; // sói không gần cừu
}
int main()
{
    fast_out();
    memset(a, '.', sizeof(a));

    cin >> n >> m;
    fr(i, 0, n - 1)
    {
        fr(j, 0, m - 1)
        {
            cin >> a[i][j];
        }
    }
    fr(i, 0, n - 1)
    {
        fr(j, 0, m - 1)
        {
            if (a[i][j] == 'W')
            {
                if (checks_w(i, j) == true)
                {
                    cout << "No";
                    exit(0);
                }
            }
        }
    }
    cout << "Yes\n";
    fr(i, 0, n - 1)
    {
        fr(j, 0, m - 1)
                cout
            << a[i][j];
        cout nl;
    }
}