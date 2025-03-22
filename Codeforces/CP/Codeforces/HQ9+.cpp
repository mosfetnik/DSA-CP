#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool flag = false;

    for (char c : s)
    {
        if (c == 'H' || c == 'Q' ||  c == '9')
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}