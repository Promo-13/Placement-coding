class Solution {
public:
    
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
    
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDistance = -1;

        
        int firstPrimeIndex = -1, lastPrimeIndex = -1;
        for (int i = 0; i < n; ++i) {
            if (isPrime(nums[i])) {
                if (firstPrimeIndex == -1) firstPrimeIndex = i;
                lastPrimeIndex = i;
            }
        }

        if (firstPrimeIndex == -1) return -1;


        maxDistance = max(maxDistance, lastPrimeIndex - firstPrimeIndex);

    
        for (int i = firstPrimeIndex + 1; i < lastPrimeIndex; ++i) {
            if (isPrime(nums[i])) {
                maxDistance = max(maxDistance, max(i - firstPrimeIndex, lastPrimeIndex - i));
            }
        }

        return maxDistance;
    }
};
