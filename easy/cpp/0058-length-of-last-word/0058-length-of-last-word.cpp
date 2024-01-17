class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, maxLength = 0;

        for(int i = 0 ; i < s.length() ; i++){
            if( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) length++;
            if(s[i] == ' ' && length != 0){
                maxLength = length;
                length = 0;
            }
        }

        return length > 0 ? length : maxLength;
    }
};