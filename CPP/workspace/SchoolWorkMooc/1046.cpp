#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  auto a = stoi(str);
  if (a % 15 == 0)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}