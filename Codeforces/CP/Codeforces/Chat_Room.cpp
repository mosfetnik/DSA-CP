#include <iostream>
using namespace std;

int main()
{
    string s, equal;
    cin >> s;
    int n = s.length();

    equal = "hello";
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == equal[count])
            count++;
    }

    if (count == equal.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}