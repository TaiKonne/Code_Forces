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
        int keo1 = 0, keo2 = 0;
        cin >> n;

        while (n--)
        {
            int a;
            cin >> a;
            s += a;
            if (a == 1)
                keo1++;
            else
                keo2++;
        }
        if (s % 2 == 0)
        {
            n /= 2;
            if (s % 2 == 0 && keo1 % 2 == 0 && keo2 % 2 == 0)
                yep;
            else
                nope;
        }
        if (s % 2 != 0)
        {
            nope;
            continue;
        }
    }
}