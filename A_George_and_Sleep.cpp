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

int main()
{
    string a;
    string b;
    cin >> a >> b;
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0;

    h1 = a[0] - '0';
    h1 = h1 * 10 + a[1] - '0';

    h2 = b[0] - '0';
    h2 = h2 * 10 + b[1] - '0';

    m1 = a[3] - '0';
    m1 = m1 * 10 + a[4] - '0';

    m2 = b[3] - '0';
    m2 = m2 * 10 + b[4] - '0';

    int t1 = m1 - m2;
    int t2 = h1 - h2;
    if (t1 < 0)
    {
        t1 += 60;
        t2--;
    }
    if (t2 < 0)
    {
        t2 += 24;
    }
    if (t2 < 10)
        cout << 0;
    cout << t2 << ':';
    if (t1 < 10)
        cout << 0;
    cout << t1;
}