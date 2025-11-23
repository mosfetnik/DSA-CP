// O(n) - Time Complexity
// O(1) - Space Complexity

class Solution
{

public:
    bool is_palindrome(string &s, int i, int j)
    {

        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int n = s.size();

        int i = 0;
        int j = n - 1;
        int cnt = 0;

        while (i < j)
        {

            if (s[i] != s[j])
            {
                return is_palindrome(s, i + 1, j) || is_palindrome(s, i, j - 1);
            }

            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};