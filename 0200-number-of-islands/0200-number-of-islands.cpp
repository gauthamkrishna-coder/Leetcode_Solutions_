class Solution {
public:
    int diff[5] = {0, 1, 0, -1, 0};
    void dfs(vector<vector<char>>& grid, int row, int col, int R, int C){
        grid[row][col] = '0';
        for(int adj = 0; adj<4; adj++){
            int adjr = row + diff[adj];
            int adjc = col + diff[adj+1];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && grid[adjr][adjc]=='1'){
                dfs(grid, adjr, adjc, R, C);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        int count = 0;
        for(int row=0; row<R; row++){
            for(int col=0; col<C; col++){
                if(grid[row][col]=='1'){
                    dfs(grid, row, col, R, C);
                    count++;
                }
            }
        }
        return count;
    }
};