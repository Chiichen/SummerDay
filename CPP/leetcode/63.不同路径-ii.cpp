/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int xn=ob.size();
        int yn=ob[0].size();
        for(int i=0;i<xn;i++)
        {
            for(int j=0;j<yn;j++)
            {
                if(ob[i][j]==1) ob[i][j]-=2;
                else if(i==0||j==0) ob[i][j]=1;
                else  ob[i][j]=0;
            }
            
        }
        // for(auto& e:ob)
        // {
        //     for(auto& p:e)
        //     {
        //         cout<<p<<' ';
        //     }
        //     cout<<endl;
        // }  
        for(int i =0; i<xn; i++)
        {
            for (int j = 0; j < yn; j++)
            {
                if(ob[i][j]>=0)
                {
                    if(i>0&&j>0) ob[i][j]=max(ob[i-1][j],0)+max(ob[i][j-1],0);
                    else if(i==0&&j!=0) ob[i][j]=max(ob[i][j-1],0);
                    else if(j==0&&i!=0) ob[i][j]=max(ob[i-1][j],0);
                } 
            }
            
        }
        // for(auto& e:ob)
        // {
        //     for(auto& p:e)
        //     {
        //         cout<<p<<' ';
        //     }
        //     cout<<endl;
        // }
        return max(ob[xn-1][yn-1],0);
        
        
    }
};

// @lc code=end
