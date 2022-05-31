#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a = {100, 20, 10, 5, 1};


    // if (n % 100 == 0)
    // {
    //     cout << n / 100;
    // }

    int i = 0, dem = 0;

    while (n != 0)
    {
        if (n >= a[i])
        {
            n -= a[i];
            dem++;
        }
        else
        {
            i++;
        }
    }
    cout<<dem;
}