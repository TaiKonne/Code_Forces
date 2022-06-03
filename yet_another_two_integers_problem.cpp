#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vta vector<int>
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b;
        c = abs(a - b);
        cout << (c + 9) / 10 nl;
    }
}