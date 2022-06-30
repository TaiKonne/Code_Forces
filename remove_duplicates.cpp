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

    int n;
    cin >> n;
    vti a(n);
    vti b;
    set<int> c;
    for (auto &x : a)
    {
        cin >> x;
    }
    int cnt = 0;
    b.pb(0);
    luvl(i, a.sz - 1, 0)
    {
        int flag = 0;
        luvr(j, 0, b.sz - 1)
        {
            if (a[i] == b[j])
            {
                cnt++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            b.pb(a[i]);
        }
    }
    sort(a.bg, a.ed);
    int cnt1 = 0;
    for (int i = 0; i < a.sz - 1; i++)
    {
        if (a[i] == a[i + 1])
            cnt1++;
    }
    cout << a.sz - cnt1 nl;
    luvl(i, b.sz - 1, 0)
    {
        if (b[i] != 0)
            cout << b[i] space;
    }
}