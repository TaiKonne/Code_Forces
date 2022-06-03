// 4005097     Jul 3, 2013 3:58:36 AM	fuwutu	 158B - Taxi	 GNU C++0x	Accepted	46 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, s = 0, dem[5] = {0};
    cin >> n;
    while (n--)
    {
        cin >> s;
        dem[s] += 1;
    }
    s = dem[4] + dem[3] + dem[2] / 2;

    dem[1] -= dem[3];
    if (dem[2] % 2 == 1)
    {
        s += 1;
        dem[1] -= 2;
    }
    if (dem[1] > 0)
    {
        s += (dem[1] + 3) / 4;
    }
    cout << s;
    return 0;
}