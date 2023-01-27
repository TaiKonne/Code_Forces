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

bool check[19531251];
bool check1[19531251];
vector<int> a[19531251];
vti c;
vti d;
void bfs(int x)
{
    check[x] = true;
    queue<int> q;
    q.push(x);
    while (!q.empty())
    {
        int z = q.front();
        q.pop();
        c.pb(z);
        for (auto v : a[z])
        {
            if (check[v] == false)
            {
                check[v] = true;
                // c.pb(v);
                q.push(v);
            }
        }
    }
}

int main()
{
    fast_out();
    int n;
    cin >> n;
    vti b;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        // a[y].pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        b.pb(z);
    }
    bfs(1);
    fat(x, c) cout << x sp;
    cout nl;
    if (c == b)
    {
        yep;
    }
    else
        nope;
}