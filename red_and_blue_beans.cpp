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
    int t;
    cin >> t;
    while (t--)
    {
        ll r, b, d;
        cin >> r >> b >> d;
        if (d == 0)
        {
            if (r == b)
                yep;
            else
                nope;
        }
        else
        {
            if (min(r, b) * (d + 1) >= max(r, b))
                yep;
            else
                nope;
        }
    }
}