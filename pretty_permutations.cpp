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
#define luvr(i, l, r) for (int i = l; i <= r; i++)
#define luvl(i, r, l) for (int i = r; i >= l; i--)
#define wh while

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            luvr(i, 1, n)
            {
                (i % 2 == 0) ? cout << i - 1 space : cout << i + 1 space;
            }
        }
        else
        {
            cout << 3 space << 1 space;
            luvr(i, 3, n)
            {
                (i % 2 == 0) ? cout << i + 1 space : cout << i - 1 space;
            }
        }
        // 3 1 2 5 4 7 6 
        // 1 2 3 4 5 6 7
        cout nl;
    }
}