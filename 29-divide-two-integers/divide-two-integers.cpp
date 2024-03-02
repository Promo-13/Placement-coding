class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        long long int res = dividend / divisor;
        if (res < INT_MIN){
            return INT_MIN;
        }else if(res > INT_MAX){
            return INT_MAX;
        }
        return res;
    }
};