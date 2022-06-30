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
    int a, b, n;
    cin >> a >> b >> n;
    while (true)
    {
        n -= __gcd(a, n);
        if (n <= 0)
        {
            cout << 0;
            return 0;
        }
        n -= __gcd(b, n);
        if (n <= 0)
        {
            cout << 1;
            return 0;
        }
    }
}