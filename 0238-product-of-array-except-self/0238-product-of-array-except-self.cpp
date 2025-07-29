class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;

        int sum = 1;
        int zeroCount = 0;
        for (int& num : nums)
        {
            if (num != 0) 
            {
                sum *= num;
            }
            else
            {
                zeroCount += 1;
            }
        }

        for (int& num : nums)
        {
            int tempSum = sum;
            if (num != 0)
            {
                tempSum /= num;
                if (zeroCount > 0)
                {
                    tempSum = 0;
                }
            } 
            else 
            {
                if (zeroCount > 1)
                {
                    tempSum = 0;
                }
            }
            answer.push_back(tempSum);
        }
        return answer;
    }
};