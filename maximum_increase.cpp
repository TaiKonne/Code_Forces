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
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 1, Max = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            dem++;
        else
        {
            Max = max(dem, Max);
            dem = 1;
        }
    }
    if (dem > Max)
    {
        Max = dem;
    }
    cout << Max;
}