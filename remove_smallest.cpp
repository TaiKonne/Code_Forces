#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        vector<int> a;
        while (t--)
        {
            int b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == a[i - 1] + 1 || a[i] == a[i - 1])
            {
                a.erase(a.begin() + i - 1);
                i--;
                continue;
            }
        }
        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout << a[i] << " ";
        // }
        if (a.size() == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
        a.clear();
    }
}