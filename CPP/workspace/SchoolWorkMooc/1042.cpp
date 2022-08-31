
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  if ((str[str.size() - 1] - '0'+'0') & 1)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}