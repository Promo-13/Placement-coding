class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int res = 0;
        for(auto n: nums){
            if(s.contains(n-1)) continue;
            int currlength = 1;
            while(s.contains(++n)) ++currlength;
            res = max(res,currlength);
        }
        return res;
    }
};