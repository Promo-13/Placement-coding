class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size()==1) return strs[0];
        int currIndex = 0;
        while(true){
            for(int i = 0; i < strs.size()-1; i++){
                if(currIndex >= strs[i].size() || currIndex >= strs[i+1].size() || strs[i][currIndex]!=strs[i+1][currIndex]){
                    return res;
                }
            }
            res += strs[0][currIndex];
            currIndex+=1;
        }
    }
};