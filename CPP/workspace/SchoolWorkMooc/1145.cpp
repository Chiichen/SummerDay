#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<pair<int,char>>vec;
  string str;
  getline(cin,str);
  int l=0,r=0;
  while(r<str.size())
  {
    vec.push_back(pair<int,char>(0,str[r]));
    l=r;
    while(str[l]==str[r])
    {
      vec[vec.size()-1].first++;
      r++;
    }
  }
  for(auto e:vec)
  {
    cout<<e.first<<e.second;
  }
  return 0;
}