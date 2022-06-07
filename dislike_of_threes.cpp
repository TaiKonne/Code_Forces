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
    int t;
    cin >> t;
    int k;
    int j = 1;
    int a[2000];
    for (int i = 1; i <= 2000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            a[j] = i;
            j++;
        }
    }
    while (t--)
    {
        cin >> k;
        cout << a[k] nl;
    }

    return 0;
}