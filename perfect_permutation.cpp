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
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i - 1 space;
        }
        else
            cout << i + 1 space;
    }
}