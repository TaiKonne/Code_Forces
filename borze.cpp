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
    string a;
    cin >> a;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == '.')
        {
            // i += 1;
            cout << "0";
        }
        if (a[i] == '-' && a[i + 1] == '.')
        {
            cout << 1;
            i += 1;
        }
        if (a[i] == '-' && a[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
    }
}