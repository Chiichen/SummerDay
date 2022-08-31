#include <iostream>
#include <cstring>
using namespace std;

char words[1000] = {};
int main()
{
  cin.get(words, 1000); // 有空格字符串输入；
  int length = strlen(words);

  int sum = 0; // 单个单词的长度；
  for (int i = 0; i < length; i++)
  {
    if (words[i] != ' ')
    {
      sum++;
    }
    else if (words[i] == ' ')
    {
      if (sum != 0)
      {
        cout << sum << ',';
        sum = 0; // 重置单词长度；
      }
    }
  }
  cout << sum << endl; // 最后一个单词长度单独输出；
  return 0;
}