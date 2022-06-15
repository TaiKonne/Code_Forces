#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
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
        set<int> a;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i * i > n)
                break;
            a.insert(i * i);
        }
        for (int i = 1; i * i * i <= n; i++)
        {
            if (i * i * i > n)
                break;
            a.insert(i * i * i);
        }
        cout << a.sz nl;
    }
}