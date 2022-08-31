/*
 * @lc app=leetcode.cn id=1518 lang=cpp
 *
 * [1518] 换酒问题
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottle(int numBottles, int numExchange, int empty) {
        if(numBottles+empty<numExchange) return numBottles;
        empty+=numBottles;
        return numBottles+numWaterBottle(empty/numExchange, numExchange, empty%numExchange);
    }
    int numWaterBottles(int numBottles, int numExchange) {
        int empty=0;
        return numWaterBottle(numBottles,numExchange,empty);
    }
};

// @lc code=end

