class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum = nums[0] + nums[1];
        int ct = 0;
        for(int i=0; i < nums.size()-1;i=i+2){
            if(nums[i]+nums[i+1]==sum) ct++;
            else break;
        }
        return ct;
    }
};
