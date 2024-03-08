class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int num = 0, ct;
        for(auto it: nums){
            ct = count(nums.begin(),nums.end(),it);
            if( ct > num){
                num = ct;
            }
        }
        int out = 0;
        for(auto it: nums){
            if(count(nums.begin(),nums.end(),it) == num){
                out+=1;
            }
        }
        return out;
    }
};