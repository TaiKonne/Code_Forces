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
char a[501][501];
int n, m, k;
int cnt;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int x, int y)
{
    a[x][y] = '.';
    for (int i = 0; i < 4; i++)
    {
        int ii = x + dx[i];
        int jj = y + dy[i];
        if (x >= 0 && x < n && y >= 0 && y < m && a[ii][jj] == 'X' && cnt > 0)
        {
            cnt--;
            dfs(ii, jj);
        }
    }
}

int main()
{
    fast_out();
    // int n, m;
    cin >> n >> m >> k;
    int flx = 0, fly = 0;
    memset(a, '#', sizeof(a));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
            {
                a[i][j] = 'X';
                flx = i, fly = j;
                cnt++;
            }
            // if (a[i][j] == '.')
            //     cnt++;
        }
    }
    cnt -= k;
    cnt--;
    dfs(flx, fly);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout nl;
    }

    // biến đúng k ô trống thành các wall
    // sao cho tất cả các ô còn lại vẵn tạo thành một vùng liên thông
}