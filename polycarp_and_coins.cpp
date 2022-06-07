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
        cin >> n;
        int m = n;
        if (n % 3 == 0)
        {
            m /= 3;
            cout << m space << m nl;
        }
        else
        {
            m /= 3;
            if (m + (m + 1) * 2 == n)
            {
                cout << m space << m + 1 nl;
            }
            else if ((m + 1) + (m)*2 == n)
            {
                cout << m+1 space << m nl;
            }
        }
    }
}