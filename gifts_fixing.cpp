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
        vt a;
        vt b;
        int n;
        cin >> n;
        int min1 = 1000000001, min2 = 1000000001;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
            min1 = min(min1, z);
        }
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            b.pb(z);
            min2 = min(min2, z);
        }
        // sort(a.bg, a.ed);
        // sort(b.bg, b.ed);
        ll dem = 0;

        // 3 5 6
        // 2 3 3

        for (int i = 0; i < n; i++)
        {
            dem += max(a[i] - min1, b[i] - min2);
        }
        cout << dem nl;
    }
}