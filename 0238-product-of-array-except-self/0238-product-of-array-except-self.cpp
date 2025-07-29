class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;

        int sum = 1;
        bool zeroFlag = false;
        bool multiZeroFlag = false;
        for (int& num : nums)
        {
            if (num != 0) 
            {
                sum *= num;
            }
            else
            {
                if (zeroFlag)
                {
                    multiZeroFlag = true;
                }
                zeroFlag = true;
            }
        }

        for (int& num : nums)
        {
            int tempSum = sum;
            if (num != 0)
            {
                tempSum /= num;
                if (zeroFlag)
                {
                    tempSum = 0;
                }
            } 
            else 
            {
                if (multiZeroFlag)
                {
                    tempSum = 0;
                }
            }
            answer.push_back(tempSum);
        }
        return answer;
    }
};