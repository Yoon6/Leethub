class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        int countZero = 0;
        for (auto& num: nums)
        {
            if (num == 0)
            {
                countZero++;
            }
            else
            {
                result.push_back(num);
            }
        }
        for (int i = 0; i < countZero; ++i)
        {
            result.push_back(0);
        }
        nums = result;
    }
};