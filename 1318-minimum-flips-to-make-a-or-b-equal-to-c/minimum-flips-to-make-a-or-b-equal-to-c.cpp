class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;

        while(a != 0 || b != 0 || c !=0){
            int bit1 = a & 1 ? 1 : 0;
            int bit2 = b & 1 ? 1 : 0;
            int bit3 = c & 1 ? 1 : 0;

            if(bit3 != (bit2|bit1)){
                if(bit3 == 1){
                     flips += 1;
                }
                else flips += (bit1+bit2);
            }
            
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return flips;
    
    }
};
