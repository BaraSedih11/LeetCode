class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";

        //sort(chars.begin(), chars.end());
        char c = chars[0];
        s += c;
        for(int i = 0 ; i < chars.size() ; i++) {
            if(chars[i] == 0) continue;
            if(chars[i] != c){
                c = chars[i];
                s += c;
            }
            int count = 0;

            for(int j = i ; j < chars.size() ; j++){
                if(chars[j] == c){
                    count ++;
                    chars[j] = 0;
                }else {
                    break;
                }
            }
            if(count > 1) s += to_string(count);
        }
        
        chars.clear();
        for(int i = 0 ; i < s.size() ; i++){
            chars.push_back(s[i]);
        }
        return s.size();
    }
};