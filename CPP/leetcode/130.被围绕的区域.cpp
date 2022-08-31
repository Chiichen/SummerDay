/*
 * @lc app=leetcode.cn id=130 lang=cpp
 *
 * [130] 被围绕的区域
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int move_x[4]{1,0,-1,0};
    int move_y[4]{0,1,0,-1};
    void bfs(vector<vector<char>>& board,int x, int y)
    {
        int xn=board.size();
        int yn=board[0].size();
        pair<int,int>point;
        point.first=x,point.second=y;
        queue<pair<int,int>>que;
        que.push(point);
        while(!que.empty())
        {
            pair<int,int>p;
            point=que.front();
            que.pop();
            board[point.first][point.second]='Q';
            for(int i=0;i<4;i++)
            {
                p.first=point.first+move_x[i];
                p.second=point.second+move_y[i];
                if(p.first>=0&&p.first<xn&&p.second>=0&&p.second<yn)
                {
                    if(board[p.first][p.second]=='O')
                    {
                        que.push(p);
                        board[p.first][p.second]='Q';
                    }
                }
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int xn=board.size();
        int yn=board[0].size();
        for(int i=0;i<xn;i++)
        {
            if(board[i][0]=='O') bfs(board,i,0);
            if(board[i][yn-1]=='O') bfs(board,i,yn-1);
        }
        for(int i=0;i<yn;i++)
        {
            if(board[0][i]=='O') bfs(board,0,i);
            if(board[xn-1][i]=='O') bfs(board,xn-1,i);
        }
        for(auto&e:board)
        {
            for(auto&p:e)
            {
                if(p=='O') p='X';
                else if(p=='Q') p='O';
            }
        }
    }

};


// @lc code=end