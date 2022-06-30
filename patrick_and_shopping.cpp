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
#define space << " " <<
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define luvr(i, l, r) for (int i = l; i <= r; i++)
#define luvl(i, r, l) for (int i = r; i >= l; i--)
#define wh while

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int Min = min(a * 2 + b * 2, (a + b + c));
    int Min1 = min(a * 2 + c * 2, b * 2 + c * 2);
    cout << min(Min, Min1) nl;
}