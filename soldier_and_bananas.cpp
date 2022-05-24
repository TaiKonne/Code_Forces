#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int s = 0;
    for (int i = 1; i <= w; i++)
    {
        s = s + (i * k);
    }

    if (s - n <= 0)
        cout << 0;
    else if (s - n > 0)
        cout<<s-n;
}