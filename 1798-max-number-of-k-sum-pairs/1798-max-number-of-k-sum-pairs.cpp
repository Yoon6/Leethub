class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(), nums.end());

        int first = 0;
        int end = nums.size() - 1;

        while(first < end)
        {
            int tempSum = nums[first] + nums[end];
            if (tempSum == k)
            {
                count++;
                first++;
                end--;
                continue;
            }

            if (tempSum > k)
            {
                end--;
            }
            else
            {
                first++;
            }
        }

        return count;

    }
};