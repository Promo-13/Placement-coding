class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxi = 0, secondMax = 0;
        int mini = INT_MAX, secondMin = INT_MAX;
        for(int num: nums){
            if(num > maxi){
                secondMax = maxi;
                maxi = num;
            }else if(num > secondMax){
                secondMax = num;
            }
            if(num < mini){
                secondMin = mini;
                mini = num;
            }else if(num < secondMin){
                secondMin = num;
            }
        }
        return (maxi * secondMax) - (mini * secondMin);
    }
};