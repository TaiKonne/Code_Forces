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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vti a;
        vti b;
        while (n--)
        {
            int z;
            cin >> z;
            if (z % 2 != 0)
            {
                a.pb(z);
            }
            else if (z % 2 == 0)
            {
                b.pb(z);
            }
        }
        for (int i = 0; i < a.sz; i++)
            cout << a[i] space;
        for (int i = 0; i < b.sz; i++)
            cout << b[i] space;
        cout nl;
    }
}