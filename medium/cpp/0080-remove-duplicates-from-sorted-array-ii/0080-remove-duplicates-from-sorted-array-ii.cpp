class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        if (nums.size() > 1) temp.push_back(nums[1]);

        int j = 0;
        for(int i = 2 ; i < nums.size() ; i++){
            if(temp[j] == nums[i]) continue;
            j++;
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};