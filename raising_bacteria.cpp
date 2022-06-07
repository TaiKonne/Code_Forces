#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()

int main()
{
    ll n;
    cin >> n;
    int dem = 0;
    while (n / 2 != 0)
    {
        if (n % 2 == 1)
            dem++;
        n = n / 2;
    }
    cout <<  + 1;
}