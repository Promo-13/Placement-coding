class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum = 0;
        int count = 0;
        int posMin = INT_MAX;
        int negMax = INT_MIN;

        for(int node: nums){
            int val = node ^ k;
            sum += node;
            int netchange = val - node;

            if(netchange > 0){
                posMin = min(posMin, netchange);
                sum += netchange;
                count += 1;
            }else{
                negMax = max(negMax, netchange);
            }
        }
        if(count % 2 == 0){
            return sum;
        }
        return max(sum - posMin, sum + negMax);
    }
};
