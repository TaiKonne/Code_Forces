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
vector<ll> aa[10000];
void check_bfs(int x, int y)
{
    queue<int> q;
    q.push(x);
    int fl = 0, fl1 = 0;
    while (!q.empty())
    {
        int t = q.front();
        if (t * 2 <= y)
        {
            aa[t].pb(t * 2);
            fl = 1;
            q.push(t * 2);
            if (t * 2 == y)
            {
                break;
            }
        }
        if (t * 10 + 1 <= y)
        {
            aa[t].pb(10 * t + 1);
            q.push(10 * t + 1);
            if (t * 10 + 1 == y)
            {
                break;
            }
        }

        q.pop();
    }
}
int fl1 = 0;

void printPath(vector<ll> stack)
{
    ll i;
    yep;
    cout << stack.sz nl;
    for (i = 0; i < (ll)stack.size() - 1;
         i++)
    {
        cout << stack[i] << " ";
        fl1 = 1;
    }
    cout << stack[i];
}

void DFS(vector<ll> v[],
         bool vis[],
         int x,
         int y,
         vector<ll> stack)
{
    stack.push_back(x);
    if (x == y)
    {
        printPath(stack);
        return;
    }
    vis[x] = true;

    if (!v[x].empty())
    {
        for (int j = 0; j < v[x].size(); j++)
        {
            if (vis[v[x][j]] == false)
                DFS(v, vis, v[x][j], y, stack);
        }
    }

    stack.pop_back();
}

void DFSCall(int x,
             int y,
             vector<ll> v[],
             int n,
             vector<ll> stack)
{
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    DFS(v, vis, x, y, stack);
}

int main()
{
    fast_out();
    int a, b;
    cin >> a >> b;
    string fl = to_string(b);
    check_bfs(a, b);
    vector<ll> stack;
    ll n = pow(10, fl.sz);
    DFSCall(a, b, aa, n, stack);
    if (fl1 == 0)
        nope;
}