class Solution {
public:
    int candy(vector<int>& ratings) {
        int prevChild = 0;
        int n = ratings.size();
        
        int totalCandies = 0;
        vector<int> candies(n, 1);

        for(int i = 1 ; i < ratings.size() ; i++){
            if(ratings[i] > ratings[i-1]) {
                candies[i] = candies[i-1] + 1;
            }
        }
        for(int i = n-1 ; i > 0 ; i--){
            if(ratings[i] < ratings[i-1] && candies[i-1] <= candies[i]) {
                candies[i-1] = candies[i] + 1;
            }
        }
        for(auto x : candies) totalCandies += x;
        return totalCandies;
    }
};