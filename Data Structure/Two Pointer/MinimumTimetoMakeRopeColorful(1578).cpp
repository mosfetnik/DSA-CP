  int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        
        int time    = 0;
        int prevMax = 0;
        
        for(int i = 0; i<n; i++) {
            
            if(i > 0 && colors[i] != colors[i-1]) {
                prevMax = 0;
            }
            
            
            
            int curr = neededTime[i];
            
            time += min(prevMax, curr); //greedily
            
            prevMax = max(prevMax, curr);
            
        }
        
        return time;
    }

    // My Approach ,but only pass 34/130 testcasees
    class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int result = 0;
        int n = colors.size();
        for (int i = 0; i < n ; i++) {
            if (colors[i] == colors[i + 1]) {
                result += min(neededTime[i], neededTime[i + 1]);
            }
        }
        return result;
    }
};