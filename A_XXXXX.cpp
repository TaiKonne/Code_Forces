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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{

    int n, x;
    cin >> n >> x;

    vti le, chan;
    vti Mid;
    ll s = 0;
    fr(i, 1, n)
    {
        int z;
        cin >> z;
        if (z % 2 == 0)
        {
            Mid.insert(Mid.bg, z); // chan
        }
        else
            Mid.pb(z); // le
        s += z;
    }

    int l = 0, r = Mid.sz - 1;
    int s1 = n;
    if (x % 2 != 0)
    {
        wh(l <= r)
        {
            if (s % x != 0)
            {
                cout << s1 nl;

                return;
            }
            if (s % x == 0)
            {
                s -= Mid[l];
                s1--;
                if (s % x != 0)
                {
                    cout << s1 nl;
                    return;
                }
                l++;
            }
            if (s % x == 0)
            {
                s -= Mid[r];
                s1--;
                if (s % x != 0)
                {
                    cout << s1 nl;
                    return;
                }
                r--;
            }
        }
    }
    else
    {
        wh(l <= r)
        {
            if (s % x != 0)
            {
                cout << s1 nl;

                return;
            }
            if (s % x == 0)
            {
                s -= Mid[r];
                s1--;
                if (s % x != 0)
                {
                    cout << s1 nl;
                    return;
                }
                r--;
            }
            if (s % x == 0)
            {
                s -= Mid[l];
                s1--;
                if (s % x != 0)
                {
                    cout << s1 nl;
                    return;
                }
                l++;
            }
        }
    }
    if (s1 == 0)
    {
        cout << -1 nl;
        return;
    }
    cout << -1 nl;
    // fat(x, Mid) cout << x space;
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