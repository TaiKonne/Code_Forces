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
    while (t--)
    {
        int a;
        cin >> a;
        int dem = 0;
        int flag = (a % 10) - 1;

        while (a != 0)
        {
            dem++;
            a /= 10;
        }
        if (dem == 2)
            dem++;
        else if (dem == 3)
            dem += 3;
        else if (dem == 4)
            dem += 6;
        cout << dem + flag * 10 nl;
    }
}