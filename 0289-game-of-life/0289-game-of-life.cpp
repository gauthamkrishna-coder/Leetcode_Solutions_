class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>arr(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                int live = 0;
                if(i-1 >= 0 && j-1 >= 0){
                    live += board[i-1][j-1];
                }
                if(i-1 >= 0){
                    live += board[i-1][j];
                }
                if(i-1 >= 0 && j+1 < m){
                    live += board[i-1][j+1];
                }
                if(j-1 >= 0){
                    live += board[i][j-1];
                }
                if(j+1 < m){
                    live += board[i][j+1];
                }
                if(i+1 < n && j-1 >= 0){
                    live += board[i+1][j-1];
                }
                if(i+1 < n ){
                    live += board[i+1][j];
                }
                if(i+1 < n && j+1 < m){
                    live += board[i+1][j+1];
                }
                if(board[i][j] == 1){
                    if(live == 2 || live == 3){
                        arr[i][j] = 1;   
                    }
                }
                else{
                    if(live == 3)arr[i][j] = 1;
                }
            }
        }
        board = arr;
    }
};

