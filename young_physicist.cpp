#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int s;
    for (int j = 0; j < 3; j++)
    {
        s = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i][j];
        }
        if (s != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}