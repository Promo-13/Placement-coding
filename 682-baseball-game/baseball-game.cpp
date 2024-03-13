class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        int sum = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                res.push_back(res[res.size()-1]+res[res.size()-2]);
            }else if(operations[i] == "D"){
                res.push_back(res[res.size()-1]*2);
            }else if(operations[i] == "C"){
                res.pop_back();
            }else{
                res.push_back(stoi(operations[i]));
            }
        }
        for(auto it: res){
            sum += it;
        }
        return sum;
    }
};