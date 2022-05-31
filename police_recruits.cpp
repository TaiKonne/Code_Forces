#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int com = 0, cuop = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a > 0)
        {
            com += a;
        }
        else if (a < 0)
        {
            if (com > 0)
            {
                com--;
            }
            else if (com <= 0)
                cuop--;
        }
    }

    cout << abs(cuop); 
}