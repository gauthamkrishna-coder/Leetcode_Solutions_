class Solution {
public:
    int maxTotalReward(vector<int>& v) {
        sort(v.begin(), v.end());

        bitset<100000> dp;
        dp[0] = 1;

        for (int x : v) {
            bitset<100000> eligible = dp;
            for (int i = x; i < 100000; i++) {
                eligible[i] = 0;
            }

            dp |= (eligible << x);
        }

        for (int i = 99999; i >= 0; i--) {
            if (dp[i]) return i;
        }

        return 0;
    }
};