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
    char c, p = 'a';
    int r = 0;
    while (cin >> c)
    {
        r += min(abs(p - c), 26 - abs(p - c));
        p = c;
    }
    cout << r;
    return 0;
}