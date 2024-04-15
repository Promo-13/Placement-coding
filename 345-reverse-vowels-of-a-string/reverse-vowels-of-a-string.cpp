class Solution {
public:

    bool isVow(string s, char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ) return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length();
        int l = 0;
        int r = n - 1;

        while(l < r){
            if(!isVow(s, s[l])){
                l++;
            }
            if(!isVow(s, s[r])){
                r--;
            }
            if(isVow(s, s[l]) && isVow(s, s[r])){
                int temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
        }
        return s;
    }
};
