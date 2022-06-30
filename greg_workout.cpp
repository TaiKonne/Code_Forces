#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;

    fr(i, 1, n)
    {
        int z;
        cin >> z;
        if (i % 3 == 1)
            a += z;
        else if (i % 3 == 2)
            b += z;
        else
            c += z;
    }

    int Max = max(a, max(b, c));

    if (Max == a)
        cout << "chest\n";
    else if (Max == b)
        cout << "biceps\n";
    else
        cout << "back\n";
}