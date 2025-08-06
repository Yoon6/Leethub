class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg = -9999999999.0;

        int sum = 0;
        for (int i = 0; i < k; ++i)
        {
            sum += nums[i];
        }
        avg = max(avg, (sum/(double)k));
        int firIdx = 0;
        for (int i = k; i < n; ++i)
        {
            sum -= nums[firIdx++];
            sum += nums[i];
            avg = max(avg, (sum/(double)k));
        }

        return avg;
        
    }
};