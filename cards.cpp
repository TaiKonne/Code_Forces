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
    int m;
    cin >> m;
    string a;
    cin >> a;
    int n = 0, r = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == 'n')
            n++;
        if (a[i] == 'r')
            r++;
    }
    while (n--)
    {
        cout << 1 space;
    }
    while (r--)
    {
        cout << 0 space;
    }
}