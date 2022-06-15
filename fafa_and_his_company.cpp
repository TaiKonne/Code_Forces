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
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            dem++;
    }
    cout<<dem;
}