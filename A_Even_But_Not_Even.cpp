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
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
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

void sum(string a)
{
}

void solve()
{
    ll n;
    cin >> n;
    string a;
    cin >> a;
    string b = "";

    fr(i, 0, a.sz - 1)
    {
        if (a[i] == '1' || a[i] == '3' || a[i] == '5' || a[i] == '7' || a[i] == '9')
        {
            b += a[i];
        }
        if (b.sz == 2)
            break;
    }
    if (b.sz == 2)
    {
        cout << b nl;
    }
    else
        cout << -1 nl;
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}