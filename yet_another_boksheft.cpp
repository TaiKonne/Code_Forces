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
        int n, flag = 0, flag1 = 0;
        cin >> n;
        vt a;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
            if (z == 1)
            {
                flag = i;
            }
            if (z == 1 && dem == 0)
            {
                dem = 1;
                flag1 = i;
            }
        }
        // for (auto it : a)
        //     cout << a[it] space;
        int dem1 = 0;
        for (int i = flag1; i <= flag; i++)
        {
            if (a[i] == 0)
                dem1++;
        }
        cout << dem1 nl;
    }
}