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
    int x, y, z;
    cin >> x >> y >> z;
    if (z != 0)
    {
        int Min = min(x, y) + z;
        int Max = max(x, y) + z;
        if (Min == x || Min == y)
        {
            cout << "?";
        }
        else if (x == y)
        {
            cout << "?";
        }
        else
        {
            if (y + z > x && x + z > y)
                cout << "?";
            else if (x + z > y && y + z < x)
                cout << "+";
            else
                cout << "-";
        }
    }
    else if (z == 0)
    {
        if (x == y)
        {
            cout << 0;
        }
        else if (x > y)
            cout << "+";
        else
            cout << "-";
    }
}