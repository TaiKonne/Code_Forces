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
bool check[1001];
vector<int> a[1001];

// void bfs(int x)
// {
//     queue<int> q;
//     q.push(x);
//     check[x] = true;
//     while (!q.empty())
//     {
//         int z = q.front();
//         q.pop();
//         for (int v : a[z])
//         {
//             if(check[v]==false)
//             {
//                 q.push(v);
//             }
//         }
//     }
// }

int main()
{
    fast_out();
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int z;
        cin >> z;
        a[z].pb(i + 1);
    }
    bool chet = false;
    for (int i = 1; i < n; i++)
    {
        int leaf = 0;
        if (!a[i].empty())
        {
            for (auto v : a[i])
            {
                if (a[v].empty())
                    leaf++;
            }
            if (leaf < 3)
            {
                nope;
                return 0;
            }
        }
    }
    yep;
    // for (int i = 1; i < n; i++)
    // {
    //     cout << i << ": ";
    //     fat(x, a[i])
    //     {
    //         cout << x sp;
    //     }
    //     cout nl;
    // }
}