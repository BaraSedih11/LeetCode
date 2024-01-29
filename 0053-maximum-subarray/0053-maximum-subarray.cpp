class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        int sum = 0, maxSum = INT_MIN;

        for(int i = 0; i < n ; i++){
            sum = max(nums[i], nums[i]+sum);
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};