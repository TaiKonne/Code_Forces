#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define spc << " "
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ticket = 0;
    int s = 0;
    int dem = 0, dem1 = 0;

    if (m * a <= b)
    {
        cout << a * n;
        return 0;
    }

    else
    {
        cout << (n / m) * b + min((n % m) * a, b) << "\n";
    }
}