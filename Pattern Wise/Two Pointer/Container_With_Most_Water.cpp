#include <bits/stdc++.h>
using namespace std;



// O(n^2)
// O(1)
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n = height.size();
            int maxArea = 0;
    
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int h = min(height[i], height[j]);
                    int w = j - i;
                    int area = h * w;
                    maxArea = max(maxArea, area);
                }
            }
    
            return maxArea;
        }
    };
    


// O(n)
// O(1)
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxi = 0;

        int i = 0;
        int j = height.size() - 1;
        int dis = 0;
        int ans = 0;

        while (i < j)
        {
            int min_val = min(height[i], height[j]);
            dis = min_val * (j - i);
            ans = max(ans, dis);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};