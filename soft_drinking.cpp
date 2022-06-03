#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int Min = min(min((k * l) / nl, d * c), p / np);

    // cout << k * l / n << " " << d * c << " " << p / np;

    cout << Min / n;
}