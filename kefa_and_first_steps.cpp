#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;

    while (n--)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int j = 0, dem = 0, Max = 1;
    while (j < a.size())
    {
        if (a[j] >= a[j - 1])
        {
            dem++;
            Max = max(Max, dem);
        }
        else
        {
            dem = 1;
        }
        j++;
    }
    cout << Max;
}