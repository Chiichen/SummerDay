/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int xn = matrix.size();
        int yn = matrix[0].size();
        if(xn==0) return false;
        if(matrix[0][0]>target||matrix[xn-1][yn-1]<target) return false;
        int xl = 0, xr = xn-1;
        while(xl<=xr)
        {
            int mid = (xl+xr)/2;
            if(matrix[mid][0]>target) xr = mid-1;
            else if(matrix[mid][0]==target) return true;
            else xl = mid+1;//xr为行数
        }
        int yl = 0, yr = yn-1;
        while(yl<=yr)
        {
            int mid = (yl+yr)/2;
            if(matrix[xr][mid]>target) yr = mid-1;
            else if(matrix[xr][mid]==target) return true;
            else yl = mid+1;
        }
        return false;
    }
};
// @lc code=end

