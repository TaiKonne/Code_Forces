#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    // n chieu dai ruy bang
    // a b c chieu dai can cat de toi uu nhat
    cin >> n >> a >> b >> c;
    vector<int> e;
    e.push_back(a);
    e.push_back(b);
    e.push_back(c);
    sort(e.begin(), e.end());

    int s = 0, dem = 0;
    for (int i = 0; i < e.size(); i++)
    {
        if (s < n)
        {
            s += e[i];
        }
        else if (s > n)
        {
            s -= e[i];
        }
        else if (s == n)
        {
            cout << dem;
            return 0;
        }
    }
}