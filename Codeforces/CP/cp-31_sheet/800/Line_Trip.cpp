#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> points_arr;
        points_arr.push_back(0);

        for (int i = 0; i < n; i++)
        {
            long long points;
            cin >> points;
            points_arr.push_back(points);
        }
        points_arr.push_back(x);
        n = points_arr.size();

        long long max_distance_between_point = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                max_distance_between_point = max(max_distance_between_point, 2 * (points_arr[i] - points_arr[i - 1]));
            }
            else
            {
                max_distance_between_point = max(max_distance_between_point, points_arr[i] - points_arr[i - 1]);
            }
        }
        cout << max_distance_between_point << endl;
    }
    return 0;
}