/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	char a[14][10];
	string convert(string s, int numRows)
	{
		string ans;
		int size = s.size();
		int i = 0, x = 0, y = 0;
		while(i<size)
		{
			while(i<size&&x<numRows)
			{
				a[x][y] = s[i];
				i++,x++;
			}
			x=numRows-1;
			while(i<size&&x>0)
			{
				y++,x--;
				a[x][y] = s[i];
				i++;
			}
		}
		for(auto &e:a)
		{
			for(auto &g:e)
			{
				if(g!='\0'){
				ans.push_back(g);	
				cout<<g<<'+';
				}
				else cout<<'+';
				
			}
			cout<<endl;
		}
		return ans;
	}
};
// @lc code=end
