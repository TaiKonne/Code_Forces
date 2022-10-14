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
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
string ys = "Yes";
string no = "No";
int main()
{
    fast_out();
    string a;
    cin >> a;
    int s = a.sz;
    int fl = 0;

    for (int i = 0; i < s - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            fl++;
            a.erase(i, 2);
            s = a.sz;
            i = -1;
        }
    }
    if (fl % 2 != 0)
        cout << ys;
    else
        cout << no;
}