#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int Max = 0;

    int a1 = a + b * c;
    Max = max(Max, a1);
    int b1 = a * (b + c);
    Max = max(Max, b1);
    int c1 = a * b * c;
    Max = max(Max, c1);
    int d1 = (a + b) * c;
    Max = max(Max, d1);
    int e1 = a + b +
             c;
    Max = max(Max, e1);
    cout << Max;
}