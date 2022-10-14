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
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 nl;
        return;
    }

    ll cnt = 0;
    if (a > b)
    {
        wh(a > b)
        {
            if (a % 8 == 0 && a / 8 >= b)
            {
                a /= 8;
                cnt++;
            }
            else if (a % 4 == 0 && a / 4 >= b)
            {
                a /= 4;
                cnt++;
            }
            else if (a % 2 == 0 && a / 2 >= b)
            {
                a /= 2;
                cnt++;
            }
            else
                break;
        }
    }
    else if (a < b)
    {
        wh(a < b)
        {
            if (a * 8 <= b)
            {
                a *= 8;
                cnt++;
            }
            else if (a * 4 <= b)
            {
                a *= 4;
                cnt++;
            }
            else if (a * 2 <= b)
            {
                cnt++;
                a *= 2;
            }
            else
                break;
        }
    }
    if (a == b)
    {
        cout << cnt;
    }
    else
        cout << -1;
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