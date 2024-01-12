class Solution {
public:
    int longestPalindrome(string s) {
        map <char, int> mp;
        int count = 0, f = 0;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }

        for(auto a : mp){
            if(a.second % 2 == 0) count += a.second;
            else {
                f = 1;
                count += a.second - 1;
            }
        }

        if(f) return ++count;
        else return count;
    }
};