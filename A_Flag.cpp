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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<char> c;
    fr(i, 1, n)
    {
        set<char> test_r;
        string row;
        cin >> row;
        fr(i, 0, row.sz - 1)
        {
            test_r.insert(row[i]);
        }
        if (test_r.sz != 1)
        {
            nope;
            return;
        }
        else
        {
            fat(x, test_r)
            {
                c.pb(x);
            }
        }
    }
    if (c.sz == 1)
    {
        yep;
        return;
    }
    else
        fr(i, 0, c.sz - 2)
        {
            if (c[i] == c[i + 1])
            {
                nope;
                return;
            }
        }
    yep;
}

int main()
{
    fast_out();
    solve();
}