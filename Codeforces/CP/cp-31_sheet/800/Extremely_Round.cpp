#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        // Check extremely round numbers
        for (int d = 1; d <= 9; ++d) // Loop through digits 1 to 9
        {
            long long power = d; // Start with d (d * 10^0)
            while (power <= n) // Check powers of 10
            {
                count++;
                power *= 10; // Multiply by 10 for the next power
            }
        }

        cout << count << endl; // Output the result for this test case
    }

    return 0;
}
