class Solution
{
public:
    bool compareLength(string &a, string &b)
    {
        return a.length() < b.length();
    }
    bool isPredecesser(string &prev, string &curr)
    {

        int M = prev.length();
        int N = curr.length();

        if (M >= N || N - M != 1)
        {

            return false;
        }

        int i = 0;
        int j = 0;

        while (i < M && j < N)
        {
            if (prev[i] == curr[j])
            {
                i++;
            }
            j++;
        }
        return i == M
    }

    int longestStrChain(vector<string> &words)
    {

        int n = words.legth();

        sort(word.begin(), word.end(), compareLength);

        vector<int> dp(n, 1);
        int maxL = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {

                if (isPredecesser(words[i], words[j]))
                {

                    dpi[i] = max(dp[i], d[j] + 1);
                    maxL = max(maxL, dp[i]);
                }
            }
        }
        return maxL;
    }
};