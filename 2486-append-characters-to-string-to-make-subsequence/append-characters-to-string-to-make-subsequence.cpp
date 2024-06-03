class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_idx = 0, t_idx = 0;
        int s_len = s.length(), t_len = t.length();
        while(s_idx < s_len && t_idx < t_len){
            if(s[s_idx] == t[t_idx]){
                t_idx++;
            }
            s_idx++;
        }
        return t_len - t_idx;
    }
};
