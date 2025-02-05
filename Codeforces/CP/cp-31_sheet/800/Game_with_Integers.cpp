#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int op1 = n + 1;
        int op2 = n - 1;
        int count = 0;
        if (op1 % 3 == 0)
        {
            cout << "First" << endl;
        }
        else if (op2 % 3 == 0)
        {
            cout << "First" << endl;
        }
        else
        {
            count++;
            if (count <= 10)
            {
                cout << "Second" << endl;
            }
        }
    }

    return 0;
}