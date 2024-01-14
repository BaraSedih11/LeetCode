class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int, int>mp;

        for(int i = 0; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        int maxEl = 0;
        int maxNum = 0;
        for(auto i : mp){
            if(i.second > maxEl){
                maxEl = i.second;
                maxNum = i.first;
            }

        }

        return maxNum;
    }
};