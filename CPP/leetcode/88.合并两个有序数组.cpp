/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>temp;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int del=nums1.size()-m;
        auto it1=nums1.begin();
        auto it2=nums2.begin();
        while(it1!=nums1.end()-del||it2!=nums2.end())
        {
            if((it1!=nums1.end()-del&&it2!=nums2.end()&&*it1<=*it2)||(it1!=nums1.end()-del&&it2==nums2.end()))
            {
                temp.push_back(*it1++);
            }
            else if((it1!=nums1.end()-del&&it2!=nums2.end()&&*it1>=*it2)||(it1==nums1.end()-del&&it2!=nums2.end()))
            {
                temp.push_back(*it2++);
            }
        }
        nums1.swap(temp);
    }
};
// @lc code=end

