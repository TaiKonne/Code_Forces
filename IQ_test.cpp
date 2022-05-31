#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    int chan = 0, le = 0;
    int countchan = 0, countle = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            countle++;
            le = i;
        }
        else
        {
            countchan++;
            chan = i;
        }
    }

    if (countle < countchan)
        cout << le;
    else
        cout << chan;
}