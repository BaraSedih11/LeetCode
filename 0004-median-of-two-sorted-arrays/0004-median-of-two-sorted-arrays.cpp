class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3 ;

        int i = 0;
        for ( ; i < min(nums1.size(), nums2.size()) ; i++){
            nums3.push_back(nums1[i]);
            nums3.push_back(nums2[i]);
        }
        
        for ( ; i < max(nums1.size(), nums2.size()) ; i++){
            if(nums1.size() > nums2.size()) nums3.push_back(nums1[i]);
            else if(nums1.size() < nums2.size()) nums3.push_back(nums2[i]);
        }

        sort(nums3.begin(), nums3.end());

        if(nums3.size() % 2) return nums3[nums3.size()/2];
        else return ( nums3[nums3.size()/2] + nums3[nums3.size()/2 - 1] ) / 2.0;
    }
};