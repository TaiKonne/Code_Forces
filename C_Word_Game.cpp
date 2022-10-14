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
    int s = 0, s1 = 0, s2 = 0;
    // string a, b, c;
    vector<string> a, b, c;
    map<string, int> aa, bb, cc;
    for (int i = 1; i <= n; i++)
    {
        string a1;
        cin >> a1;
        a.pb(a1);
        aa[a1]++;
    }
    for (int i = 1; i <= n; i++)
    {
        string b1;
        cin >> b1;
        b.pb(b1);
        bb[b1]++;
    }
    for (int i = 1; i <= n; i++)
    {
        string c1;
        cin >> c1;
        c.pb(c1);
        cc[c1]++;
    }

    fr(i, 0, n - 1)
    {
        int fl1 = 0, fl2 = 0, fl3 = 0;
        if (bb[a[i]] != 0)
        {
            fl1++;
        }
        if (cc[a[i]] != 0)
        {
            fl1++;
        }
        if (fl1 == 0)
            s += 3;
        else if (fl1 == 1)
        {
            s++;
        }

        if (aa[b[i]] != 0)
        {
            fl2++;
        }
        if (cc[b[i]] != 0)
        {
            fl2++;
        }
        if (fl2 == 0)
            s1 += 3;
        else if (fl2 == 1)
        {
            s1++;
        }

        if (aa[c[i]] != 0)
        {
            fl3++;
        }
        if (bb[c[i]] != 0)
        {
            fl3++;
        }
        if (fl3 == 0)
            s2 += 3;
        else if (fl3 == 1)
        {
            s2++;
        }
    }
    cout << s sp << s1 sp << s2 nl;
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