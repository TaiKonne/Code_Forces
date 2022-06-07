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
        vt a;
        vt b;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n + n; i++)
        {
            if (i < n)
            {
                int z;
                cin >> z;
                a.pb(z);
            }
            else
            {
                int z;
                cin >> z;
                b.pb(z);
            }
        }
        sort(a.bg, a.ed);
        sort(b.rbg, b.red);
        for (int i = 0; i < a.sz; i++)
        {
            if (k <= 0)
            {
                break;
            }
            if (a[i] < b[i])
            {
                a[i] = b[i];
            }
            k--;
        }
        int s = 0;
        for (int i = 0; i < a.sz; i++)
        {
            s += a[i];
        }
        cout << s nl;
    }
}