#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, l;
    cin >> n >> l;
    double m = n;
    vector<double> a;
    while (m != 0)
    {
        int t;
        cin>>t;
        a.push_back(t);
        m--;
    }
    // 0 3 5 7 9 14 15
    // 15 14 9 7 5 3 0
    sort(a.begin(), a.end());
    double s=0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i]/2;
    }
    cout<<s/n;
}