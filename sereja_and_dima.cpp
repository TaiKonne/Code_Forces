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
    int n;
    cin >> n;
    vt a;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.pb(t);
    }

//    sort(a.bg, a.ed);

    int s = 0, d = 0, flag = 0;
    int r = a.size()-1, l = 0, dem = 0;
    
    while (l <= r)
    {
        dem++;
        if (a[l] < a[r])
        {
            if (dem % 2 != 0)
            {
                s += a[r];
            }
            else
            {
                d += a[r];
            }
            r--;
        }
        else if (a[l] >= a[r])
        {
            if (dem % 2 != 0)
            {
                s += a[l];
            }
            else
            {
                d += a[l];
            }
            l++;
        }
    }
    cout << s << " " << d;
}