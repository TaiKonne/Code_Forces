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
#define space << " " <<
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        string a;
        cin >> a;
        int Max = 0;
        fr(i, 0, a.sz - 1)
        {
            Max = max(Max, (int)(a[i] - '0'));
        }
        cout << Max nl;
    }
}