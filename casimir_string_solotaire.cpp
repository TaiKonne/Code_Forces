#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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
        // fflush(stdin);
        cin >> a;
        int dem = 0;
        int dem1 = a.sz;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] == 'B')
            {
                dem++;
                dem1--;
                a.erase(i, 0);
            }
        }

        // for (int i = 0; i < a.sz; i++)
        // {
        //     cout << a[i] space;
        // }
        // cout nl << dem space<< dem1;

        cout << (dem == dem1) ? "YES\n": "NO\n";
        // if (dem == dem1)
        //     yep;
        // else
        //     nope;
    }
}