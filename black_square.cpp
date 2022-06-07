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
    int a[5];

    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }
    string t;
    cin >> t;
    ll s = 0;
    for (int i = 0; i < t.size(); i++)
    {
        int b = (int)(t[i] - '0');
        s += a[b];
    }
    cout << s;
}