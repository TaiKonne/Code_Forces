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

void solve()
{
    int n;
    cin >> n;
    int flag = n / 2;
    vt a;

    for (int i = 1; i <= n; i++)
    {
        int z = pow(2, i);
        a.pb(z);
    }

    int s = 0, s1 = 0;
    for (int i = 0; i < a.sz - 1; i++)
    {
        if (flag > 1)
        {
            flag--;
            s += a[i];
        }
        else
        {
            s1 += a[i];
        }
    }
    s += a[a.sz-1];
    // cout<<s space <<s1;
    cout << abs(s - s1) nl;
    // đụ mẹ mệt vl lun;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}