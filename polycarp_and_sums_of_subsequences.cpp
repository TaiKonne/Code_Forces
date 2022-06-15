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
        vti a;
        for (int i = 0; i < 7; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
        }
        cout << a[0] space << a[1] space << a[6] - a[0] - a[1] nl;
    }
}