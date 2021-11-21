#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    queue<vector<int>> que;
    int h = mat.size();
    int w = mat[0].size();

    for (int i = 0; i < mat.size(); ++i) {
        for (int j = 0; j < mat[i].size(); ++j) {
            if(mat[i][j] == 0){
                que.push({i,j})
            }
            else{
                mat[i][j] = -1;
            }
        }
    }
    vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
    while (!que.empty()){
        vector<int> curr = que.front();
        que.pop();
        for (int i = 0; i < dir.size(); ++i) {
            int nr = curr[0] + dir[i][0];
            int nc = curr[1] + dir[i][1];
            if((nr >= 0 && nr < h) && (nc >= 0 && nc < w) && mat[nr][nc] == -1){
                mat[nr][nc] = mat[curr[0]][curr[1]] + 1;
                que.push({nr,nc});
            }

        }
    }

    return mat;
}


int main(){

}