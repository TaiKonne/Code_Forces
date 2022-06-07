#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()

int main()
{
    int a, b, c = 6;
    cin >> a >> b;

    if (a < b)
        swap(a, b);
    a = 7 - a;
    // cout << (db)(6-(b-1))/6;
    if (a == 5)
    {
        cout << a << "/" << c;
        return 0;
    }
    if (c % a == 0)
    {
        c = c / a;
        a = a / a;
    }
    else if (c || a % 2 == 0 || c || a % 3 == 0)
    {
        a = c % a;
        c = c / a;
    }
    cout << a << "/" << c;
}