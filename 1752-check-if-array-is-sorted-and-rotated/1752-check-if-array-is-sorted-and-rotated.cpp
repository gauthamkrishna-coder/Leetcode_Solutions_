class Solution {
public:
    bool check(vector<int>& nums) {
        int N = nums.size();
        int count = 0;
        for(int i=0; i< N; i++){
            if(nums[i]>nums[(i+1)%N]){
                count++;
            }
        }
        return count<=1;
    }
};