class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string, int>mp;
        int n1 = arr1.size();
        int n2 = arr2.size();
        for(int i=0; i<n1; i++){
            string s1 = to_string(arr1[i]);
            string val1 = "";
            for(char a:s1){
                val1 += a;
                mp[val1]++;
            }
        } 
        int max_ct = 0;
        for(int i=0; i<n2; i++){
            string s2 = to_string(arr2[i]);
            string val2 = "";
            int ct = 0;
            for(char b:s2){
                val2 += b;
                if(mp.count(val2)!=0){
                    
                    ct++;
                }
                else{
                    break;
                }
            }
            max_ct = max(ct, max_ct);

        }
        return max_ct;
    }
};