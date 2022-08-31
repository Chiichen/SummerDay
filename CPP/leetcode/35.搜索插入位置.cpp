/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
auto it=nums.begin();
        auto ite=nums.end()-1;
        for(int i=0;;i++)
        {

            if(*ite==target)
            {
                return distance(nums.begin(),ite);
            }
            else if(*it==target)
            {
                return distance(nums.begin(),it);
            }
            else if(it==ite||ite==it+1)
            {
                if(*it<target&&*ite>target) return distance(nums.begin(),ite);
                else if(*it<target&&*ite<target) return distance (nums.begin(),ite)+1;
                else if(*it>target&&*ite>target) return distance (nums.begin(),it);
            }
            else if(*(it+(ite-it)/2)==target)
            {
                return distance(nums.begin(),it+(ite-it)/2);
            }
            else
            {
                if(*(it+(ite-it)/2)>target)
                {
                    ite=it+(ite-it)/2;
                }
                else
                {
                    it=it+(ite-it)/2;
                }
            }
        }
    }
};
// @lc code=end

