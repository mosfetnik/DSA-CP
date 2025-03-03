#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string endings[] = {"00", "25", "50", "75"};
        int min_deletions = s.length(); // Start with maximum possible deletions

        for (string end : endings)
        {
            int last = -1, secondLast = -1;

            // Find last digit of the pair
            for (int i = s.length() - 1; i >= 0; --i)
            {
                if (s[i] == end[1])
                {
                    last = i;
                    break;
                }
            }

            // Find second last digit before last
            for (int i = last - 1; i >= 0; --i)
            {
                if (s[i] == end[0])
                {
                    secondLast = i;
                    break;
                }
            }

            // If a valid pair is found, compute deletions
            if (last != -1 && secondLast != -1)
            {
                int between = last - secondLast - 1;  // Digits between them
                int after = s.length() - last - 1;    // Digits after last
                int deletions = between + after;
                min_deletions = min(min_deletions, deletions);
            }
        }
        cout << min_deletions << "\n";
    }

    return 0;
}
