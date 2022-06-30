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
        vti a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        // if (!is_sorted(a.bg, a.ed))
        //     yep;
        // else
        //     nope;
        int flag = 0;
        for (int i = 0; i < a.sz - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = 1;
                yep;
                break;
            }
        }
        if (flag == 0)
            nope;
    }
}