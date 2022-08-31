/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int move_x[5]={-1,0,1,0};
    int move_y[5]={0,-1,0,1};
    void dfs(vector<vector<int>>& image ,int x, int y ,int oriCol,int newcol)
    {
        int xn=image.size(),yn=image[0].size();
        if(x<0||x>=xn||y<0||y>=yn||image[x][y]!=oriCol) return;
        image[x][y]=newcol;
        for (int i = 0; i < 4; i++)
        {
            dfs(image,x+move_x[i],y+move_y[i],oriCol,newcol);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int curcol=image[sr][sc];
        if(curcol==newColor) return image;

            dfs(image,sr,sc,curcol,newColor);

        return image;
        


    }
};
// @lc code=end

