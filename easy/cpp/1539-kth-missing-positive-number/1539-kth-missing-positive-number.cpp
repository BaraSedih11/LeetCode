class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int it = 0;
        int mis = 0;
        for(int i = 1 ; i <= arr.back() ; i++){
            if(arr[it] == i) it++;
            else mis++;
            if(mis == k) return i;
        }
        
        return arr.back() -mis + k ;
    }
};