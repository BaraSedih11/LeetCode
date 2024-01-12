class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //9/2hrs => k = 4
        //30
        int l = 0, r = INT_MAX;
        while(l+1 < r){
            int m = (r+l)/2;
            int t = 0;
            for (int i = 0 ; i < piles.size() ; i++){
                t += (piles[i]/m + (piles[i]%m != 0));
                if(t > h) break;
            }
            if(t <= h) r = m;
            else l = m;
        }
        return r;
    }
};
