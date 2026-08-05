class Solution {
public:
    int dp[50001];
    int helper(vector<int> &values, int n){
        if(n>=values.size()){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            int ans = INT_MIN;
            ans = max(ans, values[n] - helper(values, n+1));
            if(n+1<values.size()){
                ans = max(ans, values[n] + values[n+1] - helper(values, n+2));
            }
            if(n+2<values.size()){
                ans = max(ans, values[n] + values[n+1] + values[n+2] - helper(values, n+3));
            }
            return dp[n] = ans;
        }
    }
    string stoneGameIII(vector<int>& stoneValue) {
        for(int i=0; i<stoneValue.size(); i++){
            dp[i] = -1;
        }
        int alice = helper(stoneValue, 0);
        if(alice<0){
            return "Bob";
        }
        else if(alice==0){
            return "Tie";
        }
        return "Alice";
    }
};