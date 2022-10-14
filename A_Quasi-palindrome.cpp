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

int main()
{
    string a;
    cin >> a;
    string b = a;
    int cnt = 0;
    for (int i = a.sz - 1; i >= 0; i--)
    {
        if (a[i] != '0')
            break;
        cnt++;
    }

    for (int i = 0; i < cnt; i++)
    {
        a.pop_back();
    }
    int j = a.sz - 1;
    for (int i = 0; i < a.sz / 2; i++)
    {
        if (a[i] != a[j])
        {
            nope;
            return 0;
        }

        j--;
    }
    yep;
}