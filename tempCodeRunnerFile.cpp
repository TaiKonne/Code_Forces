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
    while (t--)
    {
        int n;
        cin >> n;
        int dem1 = 0, dem2 = 0;
        while (n--)
        {
            int z;
            cin >> z;
            if (z == 1)
                dem1++;
            else
                dem2++;
        }

        if (((dem2 * 2) + dem1) % 2 == 0)
        {
            yep;
        }
        else
            nope;
    }
}