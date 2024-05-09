class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long res = 0;
        int turns = 0;
        for(int i = 0; i < k; i++){
            res += max(happiness[i] - turns, 0);
            turns++;
        }
        return res;
    }
};