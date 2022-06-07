#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define l long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

void solve()
{
    int w, h, n;
    cin >> w >> h >> n;
    int dem = 1;
    while (h % 2 == 0)
    {
        h /= 2;
        dem *= 2;
    }
    while (w % 2 == 0)
    {
        w /= 2;
        dem *= 2;
    }
    if (dem >= n)
        yep;
    else
        nope;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}