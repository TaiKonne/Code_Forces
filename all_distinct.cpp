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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vti a;
        vti b(10001);
        int m = 0;
        while (n--)
        {
            int z;
            cin >> z;
            a.pb(z);
        }
        sort(a.bg, a.ed);
        for (int i = 0; i < a.sz; i++)
        {
            b[a[i]]++;
        }
        int i = 0, flag = 0;
        sort(b.rbg, b.red);

        int flag1 = 0;
        int flag3 = 0;

        for (int i = 0; i < b.sz; i++)
        {
            if (b[i] % 2 == 0 && b[i] != 0)
                flag1++;
            else if (b[i] % 2 != 0 && b[i] != 0)
                flag3++;
        }
        if (flag1 == 0 || flag3 == 0)
        {
            cout << flag1 + flag3 nl;
        }
        else if (flag1  flag3)
        {
            cout << abs(flag1 - flag3) nl;
        }
        else if (flag1 == flag3)
        {
            
        }
    }
}