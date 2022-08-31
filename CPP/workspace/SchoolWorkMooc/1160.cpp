#include <iostream>
#include <math.h>
using namespace std;
int output(int n)
{
  if (n < 10)
    {
      cout<<n;
      return 0;
    }
  cout << n % 10;
  return output(n / 10);
}
int main()
{
  int a = 0;
  cin>>a;
  output(a);
  return 0;
}