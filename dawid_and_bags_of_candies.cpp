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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // 1 2 3 4
    // 1 3 2 4
    // 1 4 2 3
    // 1 / 2 3 4
    // 2 / 1 3 4
    // 3 / 1 2 4
    // 4 / 1 2 3
    if (a + b == c + d)
        yep;
    else if (a + c == b + d)
        yep;
    else if (a + d == b + c)
        yep;
    else if (a == b + c + d)
        yep;
    else if (b == a + c + d)
        yep;
    else if (c == a + b + d)
        yep;
    else if (d == a + b + c)
        yep;
    else
        nope;
}