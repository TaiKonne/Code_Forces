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
        int a;
        cin >> a;
        vt b;
        int s1 = 0;
        while (a--)
        {
            int s;
            cin >> s;
            b.pb(s);
        }
        sort(b.bg, b.ed);
        b.pb(0);
        s1 = b[b.sz - 2];
        int Min = (int)s1;

        for (int i = 0; i < b.sz - 1; i++)
        {
            Min = min(Min, abs(b[i + 1] - b[i]));
        }
        cout << Min nl;
    }
}