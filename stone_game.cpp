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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000];
        int Max = 0, Min = 10001, vtmin = 0, vtmax = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (Max == a[i])
            {
                vtmax = i;
            }
            else if (Min == a[i])
            {
                vtmin = i;
            }
        }
        // sort(a.bg, a.ed);
        int flag = n / 2, step = 0;
        int flag1 = 0;

        if (flag < vtmax)
        {
            step = n - vtmax + 1;
            flag1 = 1;
        }
        else
        {
            step = vtmax;
            flag1 = 2;
        }
        cout << step space;

        int step1 = 0;
        if (flag < vtmin)
        {
            step1 = n - vtmin + 1;
            if (flag1 = 1)
            {
                cout << max(step1, step) nl;
            }
            else
            {
                
            }
        }
        else
        {
            step1 = vtmin;
        }
        cout << step1 nl;
    }
}