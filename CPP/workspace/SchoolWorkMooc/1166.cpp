#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
double f(double x, double n)
{
  if (n == 1)
    return sqrt(x + n);
  else
  {
    return sqrt(n + f(x, n - 1));
  }
}
int main()
{
  double x, n;
  cin >> x >> n;
  f(x, n);
  cout << fixed;
  cout << setprecision(2);
  cout << f(x, n) << endl;
  return 0;
}