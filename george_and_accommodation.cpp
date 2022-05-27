#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[101];
    cin >> n;

    int dem = 0, s = 0, dem1 = 0;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
        dem++;
        s += a[i];
        if (dem == 2)
        {
            s -= a[i];
            s += 2;
            if (s <= a[i])
            {
                dem1++;
            }
            s = 0;
            dem = 0;
        }
    }
    cout << dem1;
}