// using two pointer approach

int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int water = 0;
        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            int area =h* w;

            water = max(water, area);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return water;
    }