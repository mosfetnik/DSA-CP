
// Minimum Length of String After Operations

// & first approach -> Using HAshMap

// * time compplexity -> O(n)
// *space complexity -> O(n)

class Solution
{
public:
    int minimumLength(string s)
    {

        int n = s.length();
        unordered_map<char, int> mpp;
        // Step 1: Count the frequency of each character in the string
        for (char count : s)
        {
            mpp[count]++;
        }
        // step 2: // Step 2: Calculate the number of characters to delete

        int delete_Count = 0;

        for (auto &pair : mpp)
        {

            int freq = pair.second;

            if (freq % 2 == 1)
            {
                delete_Count += freq - 1;
            }
            else
            {
                delete_Count += freq - 2;
            }
        }
        return n - delete_Count;
    }
};

// & second approach -> Using Frecqueny Array

int minimumLength(string s)
{

    int n = s.length();
    //^ initialze vector of size 26 with 0
    vector<int> res(26, 0);

    int totalLength = 0;
    //^Step 1:Count the frequency of each character in the string
    for (char count : s)
    {
        res[count - 'a']++;
    }
    //^  Step2 :Calculate the number of characters to delete

    for (auto &freq : res)
    {

        if (freq == 0)
            continue;

        if (freq % 2 == 0)
            totalLength += 2; // number is even

        else
        {
            totalLength += 1; // number is odd
        }
    }

    return totalLength;
}