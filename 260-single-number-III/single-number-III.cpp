class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long res = 0;
        for(auto x: nums) {
            res ^= x;
        }
        int lastBit = res & -res;
        int x = 0, y = 0;
        for(auto i : nums){
            if(i & lastBit){
                x ^= i;
            }else{
                y ^= i;
            }
        }
        return vector<int>{x,y};
    }
};
