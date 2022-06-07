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
    int s = 0;

    if (n % 2 == 0)
    {
        int dem = n / 2;
        cout << dem nl;
        while (dem--)
        {
            cout << 2 space;
        }
        return 0;
    }

    cout << n / 2 nl;

    while (s <= n) // 2 2 2 3
    {
        if (s + 2 < n - 1)
        {
            s += 2;
            cout << 2 space;
        }
        else
        {
            cout << 3;
            return 0;
        }
    }
}