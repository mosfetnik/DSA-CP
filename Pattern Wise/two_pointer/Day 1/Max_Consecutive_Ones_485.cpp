

int consecutive_one(vector<int> &nums)
{

    int n = nums.size();

    int cnt = 0;
    int max_cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] == 1)
            cnt++;
        else
            cnt = 0;
        max_cnt = max(max_cnt, cnt);
    }
    return max_cnt;
}
