#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a{5, 4, 3, 2, 1};
    int dem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (n >= a[i])
        {
            dem++;
            n -= a[i];
            i--;
        }
        if (n == 0)
        {
            cout << dem;
            return 0;
        }
    }
}