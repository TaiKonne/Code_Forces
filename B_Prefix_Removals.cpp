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
#define space << " "
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
    string a;
    cin >> a;

    map<char, int> b;
    fr(i, 0, a.sz - 1)
    {
        b[a[i]]++;
    }
    fr(i, 0, a.sz - 1)
    {
        // --b[a[i]];
        if (--b[a[i]] == 0)
        {
            cout << a.substr(i) nl;
            break;
        }
    }
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}