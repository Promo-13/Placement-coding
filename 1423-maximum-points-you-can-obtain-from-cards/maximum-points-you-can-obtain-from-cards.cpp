class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0, lsum = 0, rsum = 0;
        for(int i = 0; i < k; i++) lsum += cardPoints[i];
        sum = lsum;
        int r = n - 1;
        for(int l = k - 1; l >= 0; l--){
            lsum -= cardPoints[l];
            rsum += cardPoints[r];
            sum = max(sum, lsum + rsum);
            r--;
        }
        return sum;
    }
};
