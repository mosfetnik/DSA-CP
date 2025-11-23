// Time complexity: O(m+n)

// Space complexity: O(1)

class Solution
{
public:
    bool validWordAbbreviation(string word, string abbr)
    {
        int n = word.length(), m = abbr.length();
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (abbr[j] == '0')
                return false;

            if (isalpha(abbr[j]))
            {
                if (word[i] == abbr[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                int subLen = 0;
                while (j < m && isdigit(abbr[j]))
                {
                    subLen = subLen * 10 + (abbr[j] - '0');
                    j++;
                }
                i += subLen;
            }
        }

        return i == n && j == m;
    }
};
