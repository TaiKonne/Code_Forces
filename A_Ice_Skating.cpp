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
int n, m;
bool check_x[1001];
bool check_y[1001];
vector<int> a[1001];
vector<int> b[1001];
int cnt = 0;
void dfs(int x);
void dfs1(int y)
{
    check_y[y] = true;
    for (int v : a[y])
    {
        if (check_y[v] == false)
        {
            dfs(v);
        }
    }
}

void dfs(int x)
{
    check_x[x] = true;
    for (int v : a[x])
    {
        if (check_x[v] == false)
        {
            dfs1(v);
        }
    }
}

int main()
{
    fast_out();
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        b[y].pb(x);
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (a[i].empty() == false)
        {
            for (int x : a[i])
            {
                dfs(x);
            }
        }
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (check_x[i] == true)
            cnt++;
    }
    cout << cnt - 1;
}