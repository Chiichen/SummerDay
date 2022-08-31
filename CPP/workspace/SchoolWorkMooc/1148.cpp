#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
  int k;
  int sum = 1; //计数器从1开始  从0开始提交也能通过 测试点中没有 3 aaasaddfs 这种情况
  char s[2501];
  cin >> k >> s;
  int len = strlen(s);              //数组s长度
  for (int i = 0; i < len - 1; i++) //遍历
  {
    if (sum == k) //如果等于约定值则输出 并结束程序
    {
      cout << s[i] << endl;
      return 0;
    }
    if (s[i] == s[i + 1])
      sum++; //如果后一个等于前一个则 计数器++
    else
      sum = 1; //否则计数器归 1
  }
  cout << "No" << endl; //没有提前结束则输出 No
  return 0;
}
