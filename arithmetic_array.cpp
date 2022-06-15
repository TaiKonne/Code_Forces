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
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long s1 = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            s1 += a[i];
        }
        if (s1 < n)
        {
            cout << 1 nl;
        }
        else if (s1 > n)
        {
            cout << s1 - n nl;
        }
        else
        {
            cout << 0 nl;
        }
    }
}