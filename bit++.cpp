#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count=0;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (t == "X++" || t == "++X")
        {
            count++;
        }
        else
            count--;
    }

    cout << count;
}