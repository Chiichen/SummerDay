/*
 * @lc app=leetcode.cn id=695 lang=cpp
 *
 * [695] 岛屿的最大面积
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct point{
        int x, y;
    };

    int move_x[4]={1,0,-1,0},move_y[4]={0,1,0,-1},maxans=0;

    int bfs(vector<vector<int>>& vec,int x0, int y0, int xn, int yn)
    {
        point t;
        queue<point> q;
        int ans=0;
        t.x=x0,t.y=y0;
        q.push(t);
        vec[t.x][t.y]=0;
        ++ans;
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                point temp;
                temp.x=t.x+move_x[i];
                temp.y=t.y+move_y[i];
                if(temp.x>=0&&temp.y>=0&&temp.x<xn&&temp.y<yn)
                {
                    if(vec[temp.x][temp.y]==1)
                    {
                    q.push(temp);
                    vec[temp.x][temp.y]=0;
                    ++ans;                           
                    }

                }

            }
            
        }
        return ans;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int xn=grid.size(),yn=grid[0].size();
        for (int i = 0; i < xn; i++)
        {
            for (int j = 0; j < yn; j++)
            {
                if(grid[i][j]==1)
                {
                    maxans=max(maxans,bfs(grid,i,j,xn,yn));
                }
            }
            
        }
        return maxans;
        
    }
};
// @lc code=end

