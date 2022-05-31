#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s = 1, dem = 0;
        vector<int> a;
        while (n != 0)
        {
            int m = (n % 10) * s;
            if (m != 0)
            {
                a.push_back(m);
            }
            s *= 10;
            n /= 10;
        }
        cout<<a.size();
        cout << '\n';
        for(int i = 0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
        a.clear();
    }
}