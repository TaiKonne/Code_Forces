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

int Max = 0;

ll tinh(int n, int m)
{
    if (n == 1 || m == 1)
    {
        return 1;
    }
    return tinh(n - 1, m) + tinh(n, m - 1);
}

int main()
{
    ll n;
    cin >> n;
    cout << tinh(n, n);
}