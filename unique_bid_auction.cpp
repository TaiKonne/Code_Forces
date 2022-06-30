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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vti b(n + 1);
        vti a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        // sort(a.bg, a.ed);
        for (int i = 0; i < a.sz; i++)
        {
            b[a[i]]++;
        }
        int flag = 0, flag1 = 0;
        for (int i = 0; i < b.sz; i++)
        {
            if (b[i] == 1)
            {
                flag = 1;
                flag1 = i;
                break;
            }
        }
        if (flag == 0)
            cout << -1 nl;
        else
        {
            for (int i = 0; i < a.sz; i++)
            {
                if (a[i] == flag1)
                {
                    cout << i + 1 nl;
                    break;
                }
            }
        }
    }
}