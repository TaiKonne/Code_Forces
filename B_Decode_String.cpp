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
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b = "";
    vti aa;
    for (int i = a.sz - 1; i >= 0; i--)
    {
        int fll;
        if (a[i] == '0')
        {
            string bb = "";
            bb += a[i - 2];
            bb = bb + a[i - 1];
            int fll1 = atoi(bb.c_str());
            // cout << fll1 sp;
            aa.pb(fll1+48);
            i -= 2;
        }
        else
        {
            aa.pb(a[i]);
        }
    }
    fl(i, aa.sz-1, 0)
    {
        cout << char(aa[i] + '0');
    }
    cout nl;
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