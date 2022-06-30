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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll flag = 0, s = 0;
        if (c % 2 == 0)
        {
            cout << (a - b) * c / 2 nl;
        }
        else
        {
            cout << (a - b) * (c / 2) + a * (c & 1) nl;
        }
    }
}