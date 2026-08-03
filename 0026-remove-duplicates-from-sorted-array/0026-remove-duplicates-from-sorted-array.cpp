class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        int i = 0;
        for(int a:st){
            nums[i] = a;
            i++;
        }
        return i;
    }
};