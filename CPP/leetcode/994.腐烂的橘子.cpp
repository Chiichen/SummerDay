/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y,time;
};

class Solution {
public:
    int move_x[4]{1,0,-1,0},move_y[4]{0,1,0,-1};
    int ans=0;
    int orangesRotting(vector<vector<int>>& grid) {
    int xn=grid.size(),yn=grid[0].size();
    queue<point>q;
    point t;
    for (int i = 0; i < xn; i++)
    {
        for (int j = 0; j < yn; j++)
        {
            if(grid[i][j]==2) 
            {
                t.x=i,t.y=j,t.time=0,q.push(t),grid[i][j]=0;
            }
            else if(grid[i][j]==0) grid[i][j]=-2;
            else if(grid[i][j]==1) grid[i][j]=-1;
        }
    }
    while(!q.empty())
    {
        point temp;
        t=q.front(),q.pop();
        grid[t.x][t.y]=t.time;
        for (int i = 0; i < 4; i++)
        {
            temp.x=t.x+move_x[i];
            temp.y=t.y+move_y[i];
            temp.time=t.time+1;
            if(temp.x>=0&&temp.x<xn&&temp.y>=0&&temp.y<yn)
            {
                if(grid[temp.x][temp.y]==-1)
                {
                    grid[temp.x][temp.y]=temp.time;
                    q.push(temp);
                }                
            }

        }
    }
    for(auto& e:grid)
    {
        for(auto& p:e)
        {
            if(p==-1) return -1;
            ans=max(ans,p);
        }
    }
    return ans;



    }
};
// @lc code=end

