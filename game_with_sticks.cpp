#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int giao_diem = n * m; 
    int so_que = n + m;
    int so_lan_choi = 0;

    while (1 == 1) // Dung oi day la vong lap vo han do tui vua tim duoc tren gg rat la hay!!! :C tài 
    {
        m--;
        n--;
        so_lan_choi++;
        if (m == 0 || n == 0)
        {
            if (so_lan_choi % 2 == 0) 
            {
                cout << "Malvika";
                return 0;
            }
            else if (so_lan_choi % 2 != 0)
            {
                cout << "Akshat";
                return 0;
            }
        }
    }
}