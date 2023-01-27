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
bool check[2000001];
vector<int> a[200001];
bool check0 = false;
void dfs(int x)
{
    check[x] = true;
    for (int v : a[x])
    {
        if (check[v] == false)
        {
            if (a[v].size() != 2)
                check0 = true;
            dfs(v);
        }
    }
}

int main()
{
    fast_out();
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        check0 = false;
        if (a[i].empty() == false)
        {
            dfs(i);
            if (check0 == true)
                cnt++;
        }
    }
    int s = 0;
    memset(check, false, sizeof(check));

    for (int i = 1; i <= n; i++)
    {
        if (check[i] == false && a[i].empty() == false)
        {
            dfs(i);
            s++;
        }
    }
    cout << s - cnt;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " : ";
    //     for (int v : a[i])
    //     {
    //         cout << v sp;
    //     }
    //     cout nl;
    // }
}