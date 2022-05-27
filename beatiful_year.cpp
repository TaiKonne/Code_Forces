#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (true)
    {
        n++;
        int t = n;
        int a = t % 10;
        t /= 10;
        int b = t % 10;
        t /= 10;
        int c = t % 10;
        t /= 10;

        if (a != b && a != c && a != t && b != c && b != t && c != t)
            break;
    }
    cout << n;
}