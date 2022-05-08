#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    int dem1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int dem;
    for (int i = 0; i < n; i++)
    {
        dem = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                dem++;
            }
        }

        if (dem >= 2)
        {
            dem1++;
        }
        else if (dem < 2)
        {
            dem = 0;
        }
    }
    cout << dem1;
}