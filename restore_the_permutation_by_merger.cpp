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
        n *= 2;
        vt a;
        vt b;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.pb(z);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    a[i] = 0;
                    continue;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] space;
            }
        }
        cout nl;
    }
}