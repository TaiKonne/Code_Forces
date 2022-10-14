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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    int n, m;
    cin >> n;
    m = n;
    int mid = (n - 1) / 2 + 1;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j <= n / 2 - i; j++)
        {
            cout << "*";
        }
        for (int f = 0; f <= i - 1; f++)
        {
            cout << "D";
        }
        for (int f = 1; f <= i - 1; f++)
        {
            cout << "D";
        }
        for (int j = n / 2 + i; j <= n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "D";
    }
    cout << endl;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int f = 0; f <= n / 2 - i; f++)
        {
            cout << "D";
        }
        for (int f = 1; f <= n / 2 - i; f++)
        {
            cout << "D";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}