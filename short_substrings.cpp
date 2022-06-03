#include <bits/stdc++.h>
using namespace std;

#define nl <<'\n';

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string a;
        cin>>a;
        // fflush(stdin);
        cout << a[0];
        int dem = 0;
        for (int i = 0; i < a.size()-1; i++)
        {
            dem++;
            if (dem == 2)
            {
                cout << a[i];
                dem = 0;
            }
        }
        cout<<a[a.size()-1]nl;
    }
}