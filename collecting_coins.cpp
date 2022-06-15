#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vt z;
        for (int i = 0; i < 3; i++)
        {
            int m;
            cin >> m;
            z.pb(m);
        }
        sort(z.bg, z.ed);
        cin >> n;
        int dem = 0;
        for (int i = 0; i < z.sz - 1; i++)
        {
            dem = dem + abs(z[z.sz - 1] - z[i]);
        }
        n -= dem;
        // n = n - dem; 1 1 3 1
        // cout << dem space << n nl;
        if (n % 3 == 0 && n >= 0)
        {
            yep;
        }
        else if (n < 0)
        {
            nope;
        }
        else
        {
            nope;
        }
    }
}