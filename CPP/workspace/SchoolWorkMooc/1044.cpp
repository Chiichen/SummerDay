#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  if (str.size() > 1 && str.size() < 3)
    cout << 1;
  else
    cout << 0;
  return 0;
}