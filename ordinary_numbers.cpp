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
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    int t;
    cin >> t;
    // 11 22 33 44 55 66 77 88 99
    //  111 222 333 444 555 666 777 888 999
    //  1111 2222 3333 4444 5555 6666 7777 8888 9999
    wh(t--)
    {
        ll n;
        cin >> n;
        if (n < 10)
        {
            cout << n nl;
        }
        else
        {
            ll cnt = 0, s = 0;

            fr(i, 1, 9)
            {
                s=i;
                wh(s <= n)
                {
                    s = s * 10 + i;
                    cnt++;
                }
            }
            cout << cnt nl;
        }
    }
}