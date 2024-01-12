class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) {
                // If the current index is not reachable, return false
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= nums.size() - 1) {
                // If we can reach or go beyond the last index, return true
                return true;
            }
        }
        return false;
    }
};
