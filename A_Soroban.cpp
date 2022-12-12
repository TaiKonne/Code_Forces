#include <bits/stdc++.h>
using namespace std;

// It’s just a bad day, not a bad life!

int main()
{
    string a;
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == '0')
            cout << "O-|-OOOO" << endl;
        else if (a[i] == '1')
            cout << "O-|O-OOO" << endl;
        else if (a[i] == '2')
            cout << "O-|OO-OO" << endl;
        else if (a[i] == '3')
            cout << "O-|OOO-O" << endl;
        else if (a[i] == '4')
            cout << "O-|OOOO-" << endl;
        else if (a[i] == '5')
            cout << "-O|-OOOO" << endl;
        else if (a[i] == '6')
            cout << "-O|O-OOO" << endl;
        else if (a[i] == '7')
            cout << "-O|OO-OO" << endl;
        else if (a[i] == '8')
            cout << "-O|OOO-O" << endl;
        else if (a[i] == '9')
            cout << "-O|OOOO-" << endl;
    }
}