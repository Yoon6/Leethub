class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;
        
        vector<int> leftMin(n);   // 왼쪽에서 현재까지의 최솟값
        vector<int> rightMax(n);  // 오른쪽에서 현재까지의 최댓값

        leftMin[0] = INT_MAX;
        for (int i = 1; i < n; ++i)
        {
            leftMin[i] = min(leftMin[i-1], nums[i-1]);
        }
        // for (int i = 0; i < n; ++i)
        //     cout << leftMin[i] << " ";

        // cout << "\n";
        rightMax[n-1] = INT_MIN;
        for (int i = n - 2; i >= 0; --i)
        {
            rightMax[i] = max(rightMax[i+1], nums[i+1]);
        }
        // for (int i = 0; i < n; ++i)
        //     cout << rightMax[i] << " ";

        for (int i = 0; i < n; i++)
        {
            if (leftMin[i] < nums[i] && nums[i] < rightMax[i])
            {
                return true;
            }
        }
        
        return false;

    }
};