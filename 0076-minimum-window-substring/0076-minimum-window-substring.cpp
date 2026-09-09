class Solution {
public:
    string minWindow(string s, string t) {
        int minlen = INT_MAX;
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> mp;
        for(int i=0; i<m; i++){
            mp[t[i]]++;
        }
        int lt = 0, rt = 0;
        int cnt = 0;
        int strtidx = -1;
        while(rt<n){
            if(mp[s[rt]]>0){
                cnt++;
            }
            mp[s[rt]]--;
            while(cnt==m){
                if(rt-lt+1 < minlen){
                    minlen = rt-lt+1;
                    strtidx = lt;
                }
                mp[s[lt]]++;
                if(mp[s[lt]] > 0){
                    cnt--;
                }
                lt++;
            }
            rt++;
        }
        return strtidx==-1?"":s.substr(strtidx, minlen);
    }
};