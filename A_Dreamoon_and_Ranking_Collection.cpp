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
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    fr(i, 1, n)
    {
        int z;
        cin >> z;
        mp[z]++;
    }

    int fl = 0;
    fr(i, 1, 201)
    {
        if (mp[i] == 0)
        {
            x--;
            if (x == 0)
            {
                fl = i;
                break;
            }
        }
    }

    fr(i, fl + 1, 201)
    {
        if (mp[i] == 0)
            break;
        else
            fl = i;
    }
    cout << fl nl;

    // fat(x, mp) cout << x.first sp;
    // cout nl;
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