class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max_sum = nums[0] + nums[1] + nums[2];
        for(int i=0; i<n; i++){
            int right = n-1;
            int left = i+1;
            while(left<right){
                int sum = nums[left] + nums[i] + nums[right];
                if(abs(target-sum) < abs(target-max_sum)){
                    max_sum = sum;
                }
                if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return max_sum;
    }
};