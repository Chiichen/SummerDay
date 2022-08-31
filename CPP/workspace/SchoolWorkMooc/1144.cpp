#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;
vector<string> split3(const string &str, const char pattern)
{
  vector<string> res;
  stringstream input(str);
  string temp;

  while (getline(input, temp, pattern))
  {
    res.push_back(temp);
  }
  return res;
}
int main()
{
  string str;
  getline(cin, str);
  auto vec = split3(str, ' ');
  for (auto &e : vec)
  {
    reverse(e.begin(), e.end());
  }
  for (auto e : vec)
  {
    cout << e << ' ';
  }
  return 0;
}
