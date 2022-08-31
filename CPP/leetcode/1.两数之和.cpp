/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mymap;
        for(int j=0;j<nums.size();j++)
        {
            auto it=mymap.find(target-nums[j]);
            if(it!=mymap.end())
            {
                return {it->second,j};
            }
            mymap[nums[j]]=j;//来避开计算自己
        }            
        return {};
        

    }
};
// @lc code=end

