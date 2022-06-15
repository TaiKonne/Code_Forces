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
    int a[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    int n, m;
    cin >> n >> m;
    int flag = 0;
    for (int i = 0; i < 15; i++)
    {
        if (n == a[i] && m == a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        nope;
    else
        yep;
}