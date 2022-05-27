#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = 0, Max = 0;
    int j = 0;
    while (n != 0)
    {
        int a, b;
        cin >> a >> b;
        s += b;
        s -= a;
        Max = max(Max, s);
        n--;
    }
    cout << Max;
}