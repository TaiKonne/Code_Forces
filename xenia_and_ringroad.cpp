#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m + 1];
    long long step = 0;
    a[0] = 1;

    for (int i = 1; i <= m; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++)
    {
        if (a[i] >= a[i - 1])
        {
            step += a[i] - a[i - 1];
        }
        else if (a[i] < a[i - 1])
        {
            step += n - a[i - 1] + a[i];
        }
    }

    // for (int i = 1; i <= m; i++)
    // {
    //     cout << a[i] << " ";
    // }

    cout << step;
}