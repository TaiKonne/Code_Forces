#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, t;
    cin >> n >> k;

    if (n % 2 == 0) // n chan
    {
        t = n / 2;
    }
    else // n le
    {
        t = (n + 1) / 2;
    }
    if (k <= t)
    {
        cout << (k * 2) - 1;
    }
    else
    {
        cout << (k - t) * 2;
    }
}