class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums[nums.size()/2];
        if(count(nums.begin(), nums.end(), n)==1){
            return true;
        }
        return false;
    }
};