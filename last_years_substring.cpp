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
#define wh while

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        // string b = "2020";
        int k = 0;
        int flag = 0;
        luvr(i, 0, 4)
        {
            if (a.substr(0, i) + a.substr(n - 4 + i, 4 - i) == "2020")
            {
                flag = 1;
            }
        }
        if (flag == 1)
            yep;
        else
            nope;
    }
}