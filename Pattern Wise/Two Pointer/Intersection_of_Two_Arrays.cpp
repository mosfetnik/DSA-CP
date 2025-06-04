
#include <bits/stdc++.h>
using namespace std;

// using  two set
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> ans;
        int n = nums2.size();

        for (int num : nums1)
            set1.insert(num);

        for (int num : nums2)
        {
            if (set1.count(num))
                set2.insert(num);
        }

        for (int it : set2)
            ans.push_back(it);

        return ans;
    }
};

// using two pointer

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        int m = nums1.size();
        int n = nums2.size();
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        set<int> stt;
        int i = 0;
        int j = n - 1;
        while ((i < m) && (j < n))
        {

            if (nums1[i] == nums2[j])
            {
                stt.insert(nums1[i]);
                i++;
                j++;
            }

            else if (nums1[i] > nums2[j])
                j++;

            else
                i++;
        }

        for (int it : stt)
        {
            res.push_back(it);
        }
        return res;
    }
};