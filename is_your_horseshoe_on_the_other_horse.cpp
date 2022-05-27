#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> a;
    
    for (int i = 0; i < 4; i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }

    sort(a.begin(),a.end());
    int dem = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] == a[i + 1])
            dem++;
    }
    cout << dem;
}