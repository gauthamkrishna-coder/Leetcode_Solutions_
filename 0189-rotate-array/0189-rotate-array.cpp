class Solution {
public:
    void rot(vector<int>&arr, int left, int right){
        while(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        rot(nums, 0, n-1);
        rot(nums, 0, k-1);
        rot(nums, k, n-1);
    }
};