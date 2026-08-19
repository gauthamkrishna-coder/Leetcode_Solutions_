class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int N = nums.size();
        long long s = 0, t = 0;
        for(int i=0; i<N; i++){
            s += (i*nums[i]);
            t += nums[i];
        }
        long long ans = s;
        for(int i=1; i<N; i++){
            s = s + t - N*nums[N-i];
            ans = max(ans, s);
        }
        return ans;
    }
};