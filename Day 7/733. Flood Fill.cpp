#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>& image, int sr, int sc, int newColor, int hist_point, char dir,vector<vector<bool>> &vis){
    if(sr < 0 || sc < 0 || sr > image.size()-1 || sc > image[0].size()-1){
        return;
    }
    if(vis[sr][sc] == true || image[sr][sc] != hist_point){
        return;
    }
    vis[sr][sc] = true;
    if(dir == '1'){
        DFS(image,sr-1,sc,newColor,hist_point,'U',vis);
        DFS(image,sr,sc-1,newColor,hist_point,'L',vis);
        DFS(image,sr+1,sc,newColor,hist_point,'D',vis);
        DFS(image,sr,sc+1,newColor,hist_point,'R',vis);
    }
    else{
        switch (dir) {
            case 'U':
                DFS(image,sr-1,sc,newColor,hist_point,'U',vis);
                DFS(image,sr,sc-1,newColor,hist_point,'L',vis);
                DFS(image,sr,sc+1,newColor,hist_point,'R',vis);
                break;
                case 'D':
                    DFS(image,sr,sc-1,newColor,hist_point,'L',vis);
                    DFS(image,sr+1,sc,newColor,hist_point,'D',vis);
                    DFS(image,sr,sc+1,newColor,hist_point,'R',vis);
                    break;
                    case 'L':
                        DFS(image,sr-1,sc,newColor,hist_point,'U',vis);
                        DFS(image,sr,sc-1,newColor,hist_point,'L',vis);
                        DFS(image,sr+1,sc,newColor,hist_point,'D',vis);
                        break;
                        case 'R':
                            DFS(image,sr-1,sc,newColor,hist_point,'U',vis);
                            DFS(image,sr+1,sc,newColor,hist_point,'D',vis);
                            DFS(image,sr,sc+1,newColor,hist_point,'R',vis);
                            break;
        }
    }
    image[sr][sc] = newColor;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(), false));
    DFS(image,sr,sc,newColor, image[sr][sc],'1',vis);
    return image;
}

int main(){

}