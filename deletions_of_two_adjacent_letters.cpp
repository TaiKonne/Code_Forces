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
        string a;
        string b;
        cin >> a >> b;
        int flag = 0;
        for (int i = 0; i < a.sz; i++)
        {
            if (b[0] == a[i] && i % 2 == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            yep;
        }
        else
            nope;
    }
}