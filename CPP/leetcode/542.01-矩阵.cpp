/*
 * @lc app=leetcode.cn id=542 lang=cpp
 *
 * [542] 01 矩阵
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std; 
struct point
{   
    int x,y,distance;
};

typedef pair<int,int> pii;
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {//类似水波进行BFS
        int tx[4] = {0,0,1,-1};
        int ty[4] = {1,-1,0,0};
        queue<pii> q;
        for(int i=0; i<mat.size(); ++i)
            for(int j=0; j<mat[0].size(); ++j)
            {
                if(mat[i][j] == 0)
                    q.push(make_pair(i,j));
                else
                    mat[i][j] = -1;
            }
        while(!q.empty())
        {
            pii temp = q.front();
            q.pop();
            for(int i=0; i<4; ++i)
            {
                int t_x = temp.first+tx[i];
                int t_y = temp.second+ty[i];
                if(t_x<0 || t_x>=mat.size() || t_y<0 || t_y>=mat[0].size() || mat[t_x][t_y]!=-1)
                    continue;
                mat[t_x][t_y] = mat[temp.first][temp.second]+1;
                q.push(make_pair(t_x,t_y));
            }
        }
        return mat;
    }
};

/*
[1,0,1,1,0,0,1,0,0,1],
[0,1,1,0,1,0,1,0,1,1],
[0,0,1,0,1,0,0,1,0,0],
[1,0,1,0,1,1,1,1,1,1],
[0,1,0,1,1,0,0,0,0,1],
[0,0,1,0,1,1,1,0,1,0],
[0,1,0,1,0,1,0,0,1,1],
[1,0,0,0,1,1,1,1,0,1],
[1,1,1,1,1,1,1,0,1,0],
[1,1,1,1,0,1,0,0,1,1],
*/
// @lc code=end

