#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> a;
    vector<int> b;
    int k;
    cin>>k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());

    int i = 0, dem = 0;
    while (i < a.size())
    {
        if (a[i] - 1 == dem)
        {
            dem++;
        }
        i++;
    }
    if (dem == k)
    {
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";
}