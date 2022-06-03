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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // int flag1 = 0, flag2 = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] != a[i] && a[i] != a[i + 1])
            {
                cout << i + 1 << '\n';
            }
        }
        if (a[0] != a[n - 1] && a[0] != a[1])
            cout << 1 << '\n';
        else if(a[0]==a[1]&&a[n-1]!=a[0])
            cout<<n<<'\n';
    }
}