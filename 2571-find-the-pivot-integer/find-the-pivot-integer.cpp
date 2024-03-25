class Solution {
public:
    int pivotInteger(int n) {
        int total = (n*(n+1))/2;
        int currsum = 0;
        for(int i = n; i >= 0; i--){
            currsum+=i;
            if(total == currsum){
                return i;
            }
            total-=i;
        }
        return -1;
    }
};