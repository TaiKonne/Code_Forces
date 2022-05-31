#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            dem++;
        }
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
                cout << "#";
            else
            {
                if (dem % 2 != 0)
                {
                    if (j != m)
                    {
                        cout << ".";
                    }
                    else
                        cout << "#";
                }
                else if (dem % 2 == 0)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                        cout << ".";
                }
                else
                    cout << "#";
            }
        }
        cout << '\n';
    }
}