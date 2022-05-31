#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int dem = 0, dem1 = 0;

    dem = 240 - k;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        dem1 += 5 * i;
        if (dem1 <= dem)
        {
            c++;
        }
        else
        {
            break;
        }
    }

    cout << c;
}