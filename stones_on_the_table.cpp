#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;
    cin >> a;
    int dem = 0;
    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] == a[i + 1])
            dem++;
    }
    cout << dem;
}