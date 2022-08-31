#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<pair<int,string>> vec;
  int num=0;
  cin>>num;
  for(int i=0; i<num; i++)
  {
    pair<int,string>stu;
    cin>>stu.first;
    cin>>stu.second;
    vec.push_back(stu);
  }
  sort(vec.begin(),vec.end(),
  [](pair<int,string>st,pair<int,string>st2)
  ->bool{return st.first>st2.first;});
  cout<<vec[0].second;
  return 0;
}