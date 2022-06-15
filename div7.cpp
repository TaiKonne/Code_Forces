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
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n nl;
        }
        else
        {
            int element_end;
            n /= 10;
            for (int i = 0; i < 10; i++)
            {
                if ((n * 10 + i) % 7 == 0)
                {
                    cout << n * 10 + i nl;
                    break;
                }
            }
        }
    }
}