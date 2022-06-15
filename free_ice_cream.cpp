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
    int t, n;
    cin >> t >> n;
    ll s = n, flag = 0;
    for (int i = 0; i < t; i++)
    {
        int a;
        string b;
        cin >> b;
        cin >> a;
        if (b[0] == '+')
        {
            s += a;
        }
        else if (s < a)
        {
            flag++;
        }
        else if (b[0] == '-')
        {
            s -= a;
        }
    }
    cout << s space << flag;
}