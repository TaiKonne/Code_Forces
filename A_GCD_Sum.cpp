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

ll sum(ll n)
{
    ll s = 0;
    wh(n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        ll n;
        cin >> n;
        wh(true)
        {
            ll gcd = __gcd(n, sum(n));
            if (gcd > 1)
            {
                cout << n nl;
                break;
            }
            else
            {
                n++;
            }
        }
    }
}