class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num1 <= num2){
            return -1;
        }
        for(int i = 1; i <= 32; i++){
            long diff = num1 - ((long)num2 * i);
            int ct = __builtin_popcountl(diff);
            if(i >= ct && i <= diff){
                return i;
            }
        }
        return -1;
    }
};