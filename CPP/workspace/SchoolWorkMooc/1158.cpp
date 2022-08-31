#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
  if(n==1) return 1;
  return n+add(n-1);
}
int main()
{
  int a = 0;
  cin>>a;
  cout<<add(a);
  return 0;
}