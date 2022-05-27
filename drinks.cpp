#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,m;
    cin >> n;
    m=n;
    double sum = 0;

    while (n--)
    {
        int t;
        cin >> t;
        sum += t;
    }

    cout << sum/m;
}