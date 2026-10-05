class Solution {
public:
    int scoreOfParentheses(string s) {
        int pts = 0;
        int pcount = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                ++pcount;
            }
            else{
                --pcount;
                if(s[i-1]=='('){
                    pts += 1 << pcount;
                }
            }
        }
        return pts;
    }
};