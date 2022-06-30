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
#define all(r) r.bg(), r.ed()

int main()
{
    string a, b;
    cin >> a >> b;
    set<int> c;
    int z = 0;
    fr(i, 0, a.sz - 1)
    {
        z = z * 10 + ((int)(a[i]) - 48);
    }
    int z1 = 0;
    fr(i, 0, b.sz - 1)
    {
        z1 = z1 * 10 + ((int)(b[i]) - 48);
    }

    fr(i, z, z1)
    {
        string c = to_string(i);
        set<int> t;
        fr(i, 0, c.sz - 1)
        {
            t.insert(c[i]);
        }
        if (t.sz == c.sz)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    // int c;
    // cin >> c;

    // set<string> d;
    // string a = to_string(c);
    // // d.insert(a);
    // // cout << d.sz;
    // fr(i, 0, a.sz - 1)
    //         cout
    //     << a[i] space;
}