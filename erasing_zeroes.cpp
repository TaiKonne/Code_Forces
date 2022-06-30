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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int r = -1, l = -1, flag = 0;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] == '1' && flag == 0)
            {
                flag = 1;
                l = i;
            }
            if (a[i] == '1')
            {
                r = i;
            }
        }
        // if (a.sz == 1)
        // {
        //     cout << 0 nl;
        //     continue;
        // }
        int dem = 0;
        for (int i = l; i <= r; i++)
        {
            if (a[i] == '0')
                dem++;
        }
        cout << dem nl;
    }
}