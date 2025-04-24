// !  O(n^2)
// !  O(m*n)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rows(m); // creating a new 2D (m*n) matrix
        vector<int> cols(n);

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {

                if (matrix[i][j] == 0)
                {
                    rows[i] = -1; // find where the i==0 mark them -1
                    cols[j] = -1;
                }
            }
        }
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (rows[i] == -1 || cols[j] == -1) // if in new array i == -1 then place [i][j] ==0
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};