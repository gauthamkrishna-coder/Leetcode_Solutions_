class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int smallest = nums[0];
        int largest = nums[n-1];
        int idx = 1;
        for(int i=smallest+1; i<largest; i++){
            if(nums[idx]!=i){
                ans.push_back(i);
            }
            else{
                idx++;
            }
            
        }
        return ans;
    }
};