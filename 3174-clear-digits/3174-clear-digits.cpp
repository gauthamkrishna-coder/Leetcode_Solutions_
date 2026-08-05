class Solution {
public:
    string clearDigits(string s) {
        string ans;
        int j = 0;
        for(int i=0; i<s.size(); i++){
           if(isdigit(s[i])){
                ans.pop_back();
           }
           else{
                ans.push_back(s[i]);
           }
        }
        return ans;
    }
};