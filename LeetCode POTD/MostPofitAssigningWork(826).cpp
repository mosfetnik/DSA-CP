class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit,
                            vector<int> &worker)
    {
        int n = difficulty.size();
        int m = worker.size();

        vector<pair<int, int>> vec;

        for (int i = 0; i < n; i++)
        {
            vec.push_back({difficulty[i], profit[i]});
        }

        sort(vec.begin(), vec.end());

        sort(worker.begin(), worker.end());

        int max_profit = 0;
        int j = 0;
        int total_profit = 0;

        for (int i = 0; i < m; i++)
        {

            while (j < n && worker[i] >= vec[j].first)
            {
                max_profit = max(max_profit, vec[j].second);
                j++;
            }
            total_profit += max_profit;
        }
        return total_profit;
    }
};