#include <bits/stdc++.h>
using namespace std;

#define nl << '\n';
#define ys cout << "YES";
#define nope cout << "NO";

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y = 0, x = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 != i % 2)
            {
                if (i % 2 == 0)
                {
                    x++;
                }
                else
                    y++;
            }
        }
        if (y != x)
            cout << -1 << endl;
        else
            cout << y << endl;
    }
}