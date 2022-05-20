#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        a.push_back(t);
    }
    int count=0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == "X++"||a[i]=="++X")
        {
            count++;
        }
        else
            count--;
    }
    cout<<count;
}