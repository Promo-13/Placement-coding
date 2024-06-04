class Solution {
public:
    int longestPalindrome(string s) {
        int ct = 0;
        unordered_map<char, int> m;
        for(auto ch : s){
            m[ch]++;
            if(m[ch] & 1){
                ct++;
            }else{
                ct--;
            }
        }
        if(ct > 1){
            return s.length() - ct + 1;
        }
        return s.length();
    }
};
