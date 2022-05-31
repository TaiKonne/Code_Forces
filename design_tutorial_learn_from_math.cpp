#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int cnt = 0, s = 0;

    if (n % 2 == 0)
    {
        n = n - 8;
        cout << n << " " << 8;
    }
    else if(n%2!=0)
    {
        n = n - 9;
        cout << n << " " << 9;
    }
    return 0;
}