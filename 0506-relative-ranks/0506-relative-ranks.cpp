class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, string> placements;
        vector<int> duplicate = score;
        sort(duplicate.rbegin(), duplicate.rend());
        for(int i=0; i<duplicate.size(); i++){
            if(i==0){
                placements[duplicate[i]] = "Gold Medal";
            }
            if(i==1){
                placements[duplicate[i]] = "Silver Medal";
            }
            if(i==2){
                placements[duplicate[i]] = "Bronze Medal";
            }
            if(i>2){
                placements[duplicate[i]] = to_string(i+1);
            }
        }
        vector<string> ans;
        for(int x:score){
            ans.push_back(placements[x]);
        }
        return ans;

    }
};