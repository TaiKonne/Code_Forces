#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res;
    cin >> n;
    for (int i = 1;i<=9999; i++)
    {
        int num = i * (i + 1) / 2;
        if (n - num >= 0)
        {
            n -= num;
            res = i;
        }
        else
            break;
    }
    cout << res << endl;
}