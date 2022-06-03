#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a[0] != '-')
    {
        cout << a;
        return 0;
    }
    if (a[0] == '-' && a[1] < 57 && a[2] == '0' && a.size() < 4)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < a.size() - 2; i++)
    {
        cout << a[i];
    }
    if (a[a.size() - 1] > a[a.size() - 2])
        cout << a[a.size() - 2];
    else
        cout << a[a.size() - 1];
}