class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        int count = 0;
        unordered_map<int, int> numToCountMap;
        for (auto& num : nums)
        {
            numToCountMap[num] += 1;
        }
        for (auto& num : nums)
        {
            if (numToCountMap[num] <= 0) 
            {
                continue;
            }
            numToCountMap[num] -= 1;
            int target = k - num;
            if (numToCountMap[target] <= 0) 
            {
                numToCountMap[num] += 1;
                continue;
            }
            numToCountMap[target] -= 1;
            count++;
        }
        return count;
    }
};