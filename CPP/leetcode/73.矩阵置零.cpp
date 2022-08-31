/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution { 
public:
    void setZeroes(vector<vector<int>>& m) {
        int x=m.size(),y=m[0].size();
        int row=1,col=1;
        for (int j = 0; j < y; j++)
        {
            if(m[0][j]==0) row=0;
        }
        
        for(int i=0;i<x;i++)
        {
            if(m[i][0]==0) col=0;
        }
        for(int i=x-1;i>=1;--i)
        {
            for (int j = y-1; j >= 1; --j)
            {
                if(m[i][j]==0) m[0][j]=0,m[i][0]=0;
            }
            
        }
        for (int i = 0; i < x; i++)
        {
            if(m[i][0]==0&&i!=0)
            {
                for (int j = 1; j < y; j++)
                {
                    m[i][j]=0;
                }
                
            }
        }
        for (int j = 0; j < y; j++)
        {
            if (m[0][j]==0&&j!=0)
            {
                for (int i = 1; i < x; i++)
                {
                    m[i][j]=0;
                }  
            }
        }
        if(!col)
        {
            for (int i = 0; i < x; i++)
            {
                m[i][0]=0;
            }
        }
        if(!row)
        {
            for (int j = 0; j < y; j++)
            {
                m[0][j]=0;
            }
            
        }
        
        
    }
};
// @lc code=end

