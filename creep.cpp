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
        int n, m;
        cin >> n >> m;
        int s = m + n;
        int flag = abs(m - n);

        if (n > m)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "01";
            }
            for (int i = 0; i < n - m; i++)
            {
                cout << "0";
            }
        }
        else if (n <= m)
        {
            for (int i = 0; i < n; i++)
                cout << "10";
            for (int i = 0; i < m - n; i++)
                cout << "1";
        }
        cout nl;
    }
}