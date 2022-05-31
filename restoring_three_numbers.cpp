#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    // 101 101 200 201
    int a[4];
    a[0] = x1;
    a[1] = x2;
    a[2] = x3;
    a[3] = x4;
    sort(a, a + 4);

    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];
    // cout<<a[3];
}