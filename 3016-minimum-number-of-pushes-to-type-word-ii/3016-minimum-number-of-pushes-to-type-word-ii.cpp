class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for(int i=0; i<word.size(); i++){
            freq[word[i] - 'a']++;
        }
        int ans = 0;
        sort(freq.begin(), freq.end(), greater<>());
        for(int i=0; i<freq.size(); i++){
            if(freq[i]==0){
                continue;
            }

            ans +=  ((i/8) + 1) * freq[i];
        }
        return ans;
    }
};