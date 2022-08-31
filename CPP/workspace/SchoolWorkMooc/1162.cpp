#include<bits/stdc++.h>
using namespace std;
int output(string::iterator ite)
{
  if(*ite!='!'){
    output(ite+1);
    cout<<*ite;
  }
  return 0;
}
int main()
{
  string str;
  cin>>str;
  auto ite = str.begin();
  output(ite);
  return 0;
}