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
        int n, m;
        cin >> n;
        m = n * 2;
        int dem = 0;
        while (m--)
        {
            int z;
            cin >> z;
            if (z % 2 != 0)
                dem++;
        }
        if (dem == n)
            yep;
        else
            nope;
    }
}