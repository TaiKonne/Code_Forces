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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vt a;
        for (int i = 0; i < 3; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
        }
        sort(a.bg, a.ed);
        if (a[1] != a[2])
        {
            nope;
        }
        else
        {
            yep;
            cout << a[0] space << a[0] space << a[1] nl;
        }
    }
}