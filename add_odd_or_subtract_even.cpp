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
        int dem = 0;
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << "0" nl;
        else
        {
            if (a > b && (a - b) % 2 == 0 || a < b && (b - a) % 2 != 0)
            {

                cout << 1 nl;
            }
            else
                cout << 2 nl;
        }
        // cout << dem nl;
    }
}