class Solution {
public:
    int GCD(int a, int b){
        if(a==0) return b;
        if(b==0) return a;
        if(a==b) return a;
        if(a>b) return GCD(a-b,b);
        return GCD(a,b-a);
    }
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        return GCD(maxi,mini);
    }
};