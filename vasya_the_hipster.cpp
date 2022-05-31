#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int giong = 0, khac = 0, dem = 0;
    while (1 == 1)
    {
        a--;
        b--;
        dem++;
        if (a == 0 || b == 0)
        {
            // cout<<a/2+b/2;
            break;
        }
    }
    cout << dem << " " << a / 2 + b / 2;
}