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
        int n;
        int s = 0;
        cin >> n;
        int flag = n;
        while (n--)
        {
            int z;
            cin >> z;
            s += z;
        }

        if (n % 2 != 0 && s % 2 == 0)
        {
            yep;
        }
        else if (s % 2 == 0)
            nope;
    }
}