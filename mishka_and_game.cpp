#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dem = 0;
    while (n--)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
            dem++;
        else if (m < c)
            dem--;
    }
    if (dem > 0)
    {
        cout << "Mishka";
    }
    else if (dem < 0)
    {
        cout << "Chris";
    }
    else
        cout << "Friendship is magic!^^";
}