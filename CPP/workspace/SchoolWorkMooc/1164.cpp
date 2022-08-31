#include<bits/stdc++.h>
using namespace std;
int digit(int num,int n)
{
  if(n!=1) return digit(num/10,n-1);
  else return num%10;
}
int main()
{
  int n,k;
  cin>>n>>k;
  cout<<digit(n,k);
  return 0;
}