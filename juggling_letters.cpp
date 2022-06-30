#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

int main()
{
    int t;
    cin >> t;
    int m;
    while (t--)
    {
        vector<int> b(26);
        int n;
        cin >> n;
        // fflush(stdin);
        m = n;
        int dem = 0;
        while (n--)
        {
            string a;
            cin >> a;
            for (int i = 0; i < a.sz; i++)
            {
                b[(int)(a[i] - 'a')]++;
            }
        }

        int flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (b[i] != 0 && b[i] % m != 0)
                flag = 1;
        }

        if (flag == 1)
            nope;
        else
            yep;
        b.clear();
    }
}