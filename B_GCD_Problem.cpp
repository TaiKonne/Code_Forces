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
    ll n;
    cin >> n;
    ll mid = n / 2;
    if (n % 2 == 0)
    {
        cout << mid space << mid - 1 space << 1 nl;
    }
    else
    {
        ll mid1 = n % 2;
        ll a = mid, b = mid, c = 1;
        wh(true)
        {
            a++;
            b--;
            if (b % (2 * c) != 0)
            {
                break;
            }
            c++;
        }
        cout << a space << b space << 1 nl;
    }
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