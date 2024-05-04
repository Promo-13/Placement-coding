class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> m;
        int n = s.length(), ct = 0;

        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(m.find(ch) != m.end()){
                ct++;
                m.clear();
            }
            m.insert(ch);
        }
        return ct + 1;
    }
};