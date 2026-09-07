class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int lt = 0, rt = height.size()-1;
        while(lt<rt){
            int curr = min(height[lt], height[rt])*(rt-lt);
            if(ans<curr){
                ans = curr;
            }
            else if(height[lt]<height[rt]){
                lt++;
            }
            else{
                rt--;
            }
        }
        return ans;
    }
};