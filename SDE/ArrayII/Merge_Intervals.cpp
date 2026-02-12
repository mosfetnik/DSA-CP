#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    int m = intervals.size();
    int n = intervals[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {

            if (intervals[i][j + 1] >= intervals[i + 1][j])
            {
                intervals[i][j + 1] = intervals[i + 1][j + 1];
            }
        }
    }
    return intervals;
}

int main()
{
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}};

    merge(intervals);

    return 0;
}