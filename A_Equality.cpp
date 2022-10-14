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
    fast_out();
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    set<char> b;
    fr(i, 0, a.sz - 1)
    {
        b.insert(a[i]);
    }
    if (b.sz != k)
    {
        cout << 0;
    }
    else
    {
        int c[27] = {0};
        fr(i, 0, a.sz - 1)
        {
            c[(int)(a[i]) - 64]++;
        }
        sort(c, c + 27);
        fr(i, 1, 26)
        {
            if (c[i] != 0)
            {
                cout << c[i] * k;
                return 0;
            }
        }
    }
}