#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  if (str[0] == '1' || str[0] == '3' || str[0] == '5')
    cout << "NO";
  else
    cout << "YES";
  return 0;
}