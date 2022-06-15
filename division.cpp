#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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
        cin >> n;
        if (n < 1400)
            cout << "Division 4" nl;
        else if (n < 1600)
            cout << "Division 3" nl;
        else if (n < 1900)
            cout << "Division 2" nl;
        else
            cout << "Division 1" nl;
    }
}
