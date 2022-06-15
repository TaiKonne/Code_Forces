#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int d = 2, dem = 0;

        while (d < n)
        {
            d += x;
            dem++;
        }
        cout << dem + 1 nl;
    }
}