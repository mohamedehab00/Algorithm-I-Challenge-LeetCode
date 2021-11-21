#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    queue<vector<int>> que;
    int h = grid.size();
    int w = grid[0].size();

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if(grid[i][j] == 2){
                que.push({i,j});
            }
        }
    }
    vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
    int min = 0;
    while (!que.empty()){
        queue<vector<int>> new_que;
        bool flag = false;
        while (!que.empty()){
            vector<int> curr = que.front();
            que.pop();
            for (int i = 0; i < dir.size(); ++i) {
                int nr = curr[0] + dir[i][0];
                int nc = curr[1] + dir[i][1];
                if((nr >= 0 && nr < h) && (nc >= 0 && nc < w) && grid[nr][nc] == 1){
                    grid[nr][nc] = 2;
                    new_que.push({nr,nc});
                    flag = true;
                }
            }
        }
        if(flag){
            min++;
        }
        que = new_que;
        while (!new_que.empty()){
            new_que.pop();
        }
    }
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if(grid[i][j] == 1){
                return -1;
            }
        }
    }
    return min;
}


int main(){
    
}