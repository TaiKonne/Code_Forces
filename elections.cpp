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
        int a, b, c;
        cin >> a >> b >> c;

        int Max = max(a, max(c, b));
        if (Max == 0)
        {
            cout << 1 space << 1 space << 1;
        }
        else
        {
            cout << max(0, max(b, c) - a + 1) << " " << max(0, max(a, c) - b + 1) << " " << max(0, max(a, b) - c + 1);
        }
        cout nl;
    }
}