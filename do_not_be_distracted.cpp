#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define spc << " "
#define vt vector<int>
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        for (int i = 0; i < a.size(); i++)
        {
            while (a[i] == a[i + 1])
            {
                a.erase(i, 1);
            }
        }
        sort(a.bg, a.ed);
        int flag = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            nope;
        }
        else
            ys;
    }
}