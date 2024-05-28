class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int st = 0, curr_cost = 0, max_len = 0;
        for(int end = 0; end < n; ++end){
            curr_cost += abs(s[end]-t[end]);
            while(curr_cost > maxCost){
                curr_cost -= abs(s[st]-t[st]);
                ++st;
            }
            max_len = max(max_len, end - st + 1);
        }
        return max_len;
    }
};
