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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int fd, fc;
        fd = x - a;
        fc = y - b;
        if (fd < 0)
        {
            fd = 0;
        }
        if (fc < 0)
        {
            fc = 0;
        }
        int fdc = c - fd - fc;
        if (fdc < 0)
            nope;
        else
            yep;
    }
}