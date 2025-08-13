class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int maxCount = 0;
        int flipCount = 0;
        int fir = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            fir = i;
            if (nums[fir] == 0)
            {
                if (flipCount < k)
                {
                    flipCount++;
                    maxCount++;
                    break;
                }
            }
            else
            {
                maxCount++;
                break;
            }
        }

        int count = maxCount;
        for (int i = fir + 1; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                if (k == 0)
                {
                    count = 0;
                    fir = i;
                }
                else if (flipCount < k)
                {
                    flipCount++;
                    count++;
                }
                else
                {
                    if (nums[fir] == 0)
                    {
                        fir++;
                    }
                    else
                    {
                        while (fir < i)
                        {
                            count--;
                            if (nums[++fir] == 0)
                            {
                                fir++;
                                break;
                            }
                        }
                        
                    }
                }
            }
            else
            {
                count++;
            }
            maxCount = max(count, maxCount);
        }
        
        return maxCount;
    }
};