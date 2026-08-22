class Trie{
public:
    string word;
    Trie* chars[26];
    Trie() {
        word = "";
        for(int i=0; i<26; i++){
            chars[i] = nullptr;
        }
    }
};
class Solution {
public:
    int diff[5] = {0, -1, 0, 1, 0};
    void dfs(int R, int C, int row, int col, vector<vector<char>>&board, vector<vector<bool>>& vis, Trie* t, vector<string>& ans){
        int chidx = board[row][col]-'a';
        if(t->chars[chidx]==nullptr){
            return;
        }
        Trie* curr= t->chars[chidx];
        vis[row][col] = true;
        if(curr->word != ""){
            ans.push_back(curr->word);
            curr->word = "";
        }
        for(int i=0; i<4; i++){
            int ar = row + diff[i];
            int ac = col + diff[i+1];
            if(ar>=0 && ar<R && ac>=0 && ac<C && !vis[ar][ac]){
                dfs(R, C, ar, ac, board, vis, curr, ans);
            }
        }
        vis[row][col] = false;
    }
    void buildTrie(Trie* p, string word, int idx){
        if(idx==word.size()){
            p->word = word;
            return;
        }
        int chidx = word[idx]-'a';
        if(p->chars[chidx]==nullptr){
            p->chars[chidx] = new Trie();
        }
        buildTrie(p->chars[chidx], word, idx+1);
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* root = new Trie();
        for(string word:words){
            buildTrie(root, word, 0);
        }
        vector<string> ans;
        int R = board.size();
        int C = board[0].size();
        vector<vector<bool>> vis(R, vector<bool>(C, false));
        for(int row=0; row<R; row++){
            for(int col=0; col<C; col++){
                dfs(R, C, row, col, board, vis, root, ans);
            }
        }
        return ans;
    }
};