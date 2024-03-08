class Solution {
public:
    int countOdds(int low, int high) {
        int ct = 0;
        for(int i = low ; i <= high; i++){
            if(i & 1) ct++;
        }
        return ct;
    }
};