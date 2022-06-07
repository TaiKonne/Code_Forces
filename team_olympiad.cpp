#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bgvt begin()
#define edvt end()

int main()
{
    
    int n;
    cin >> n;
    vt a;
    vt b;
    vt c;

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            a.pb(i);
        }
        else if (t == 2)
        {
            b.pb(i);
        }
        else
            c.pb(i);
    }

    int Minteam = min(a.size(), min(b.size(), c.size()));
    cout << Minteam nl;

    for (int i = 0; i < Minteam; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] nl;
    }
}