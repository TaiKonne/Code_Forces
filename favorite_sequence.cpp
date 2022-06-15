#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vt<int> a;
        while (n--)
        {
            int z;
            cin >> z;
            a.pb(z);
        }

        int r = a.sz - 1, l = 0;
        int d = r - 1;
        while (l < r)
        {
            cout << a[l];
            cout space;
            cout << a[r] space;
            r--;
            l++;
        }
        if (a.sz % 2 != 0)
        {
            cout << a[r];
        }
        cout nl;
    }
}