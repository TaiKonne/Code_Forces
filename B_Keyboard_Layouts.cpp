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
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    string a;
    string b;
    string c;
    cin >> a >> b;
    map<char, char> mp;
    fr(i, 0, a.sz - 1)
    {
        mp[a[i]] = b[i];
    }
    cin >> c;

    fr(i, 0, c.sz - 1)
    {
        int fl = 0;
        fat(it, mp)
        {
            if (c[i] == it.first)
            {
                cout << it.second;
                fl = 1;
            }
        }
        if (!fl)
        {
            if (c[i] > 64 && c[i] < 92)
            {
                string d;
                c[i] += 32;
                fat(it, mp)
                {
                    if (c[i] == it.first)
                    {
                        d += it.second;
                        break;
                    }
                }
                d[0] -= 32;
                cout << d;
            }
            else
                cout << c[i];
        }
    }
}