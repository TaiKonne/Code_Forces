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

int i = 0;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vt a;
        for (i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
        }

        int Max = max(a[i], a[i + 1]), Min = min(a[i], a[i + 1]);
        int dem = 0;
        for (i = 0; i < a.sz - 1; i++)
        {
            if (a[i] * 2 < a[i + 1])
            {
                a.insert(a.bg + i + 1, a[i] * 2);
                dem++;
            }
            else if (a[i] > a[i + 1] * 2)
            {
                if (a[i] % 2 != 0)
                {
                    dem++;
                    a.insert(a.bg + i + 1, a[i] / 2 + 1);
                }
                else
                {
                    dem++;
                    a.insert(a.bg + i + 1, a[i] / 2);
                }
            }
        }

        // for (auto it : a)
        //     cout << it << " ";
        cout<<dem nl;
    }
}