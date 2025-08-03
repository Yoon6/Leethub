class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxCapacity = INT_MIN;
        int n = height.size();
        int l = 0;
        int r = n-1;
        while (l < r)
        {
            int water = min(height[l], height[r]) * (r - l);
            maxCapacity = max(water, maxCapacity);
            if (height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return maxCapacity;
    }
};