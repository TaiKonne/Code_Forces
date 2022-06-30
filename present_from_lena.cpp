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
#define all(r) r.bg(), r.ed()

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j < n; j++)
            cout space space;
        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (flag == 0)
            {
                flag++;
            }
            else
                cout space;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout space;
        }
        cout nl;
    }

    for (int i = 0; i <= n; i++) // hàng giữa
    {
        cout << i space;
    }
    for (int i = n - 1; i >= 0; i--) // hàng giữa
    {
        cout << i;
        if (i != 0)
            cout space;
    }
    cout nl;

    int flag2 = n - 1;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j >= 0; j--)
            cout space space;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << j;
            if (i != n - 1)
                cout space;
        }
        for (int j = n - i - 2; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout space;
        }
        cout nl;
    }
}