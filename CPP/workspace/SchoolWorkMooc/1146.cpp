#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  string origin=str;
  reverse(str.begin(), str.end());
  if (origin == str) cout << "yes";
  else cout<<"no";
  return 0;
}