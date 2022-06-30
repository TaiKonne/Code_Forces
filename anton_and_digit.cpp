#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
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
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int s = 0;
    while (k2 > 0 || k5 > 0 || k6 > 0)
    {
        if (k2 == 0 || k5 == 0 || k6 == 0)
            break;
        if (k2 > 0 && k5 > 0 && k6 > 0)
        {
            s += 256;
        }
        k2--;
        k5--;
        k6--;
    }
    // cout << k2 space << k5 space << k6 nl;
    while (k2 > 0 || k3 > 0)
    {
        if (k2 == 0 || k3 == 0)
            break;
        if (k2 > 0 && k3 > 0)
        {
            s += 32;
        }
        k2--;
        k3--;
    }
    // cout << k2 space << k3 nl;
    cout << s;
}