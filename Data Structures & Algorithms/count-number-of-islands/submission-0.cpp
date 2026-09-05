class Solution {
    private: void dfs(int i, int j, vector<vector<char>>&grid, vector<vector<int>>&vis){
            vis[i][j]=1;
            int n=grid.size();
            int m=grid[0].size();
            int dummyrow[]={-1,0,1,0};
            int dummycol[]={0,1,0,-1};
            for(int a=0; a<4; a++){
                int newrow=dummyrow[a]+i;
                int newcol=dummycol[a]+j;

                if(newrow >=0 && newrow < n && newcol >= 0 && newcol < m){
                    if(grid[newrow][newcol]=='1' && vis[newrow][newcol]==0){
                        dfs(newrow, newcol, grid, vis);
                    }
                }
            }
        }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    ans++;
                    dfs(i, j, grid, vis);
                }
            }
        }return ans;
        
    }
};
