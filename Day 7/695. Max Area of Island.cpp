#include <bits/stdc++.h>
using namespace std;

int DFS(vector<vector<int>>& grid, int sr, int sc, vector<vector<bool>> &vis){
    if(sr < 0 || sc < 0 || sr > grid.size()-1 || sc > grid[0].size()-1){
        return 0;
    }
    if(vis[sr][sc] == true || grid[sr][sc] == 0){
        return 0;
    }
    vis[sr][sc] = true;

    int U = DFS(grid,sr-1,sc,vis);
    int L = DFS(grid,sr,sc-1,vis);
    int D = DFS(grid,sr+1,sc,vis);
    int R = DFS(grid,sr,sc+1,vis);

    return 1 + R + L + U + D;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(), false));
    int MAX = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if(grid[i][j] == 1 && vis[i][j] == false){
                MAX = max(MAX, DFS(grid,i,j,vis));
            }
        }
    }
    return MAX;
}

int main(){

}