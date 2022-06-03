#include <bits/stdc++.h>
using namespace std;

#define nl << '\n';
#define ys cout << "YES" nl;
#define nope cout << "NO" nl;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int s = 0, s1 = 0;

        s = s + (int)(a[0] - '0' + a[1] - '0' + a[2] - '0');
        s1 = s1 + (int)(a[4] - '0' + a[5] - '0' + a[3] - '0');
        
        if (s1 == s)
        {
            ys;
        }
        else
            nope;
    }
}