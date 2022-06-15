#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
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
        int n, dem = 0, x = 0;
        cin >> n;
        vt a(n + 1, 0);
        int flag = -1;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a[z]++;
            if (a[z] >= 3)
            {
                flag = z;
            }
        }
        cout << flag nl;
    }
    return 0;
}