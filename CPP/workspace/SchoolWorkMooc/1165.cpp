#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
double fun(double x, int n)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return 2 * x;
  else
    return 2 * x * fun(x, n - 1) - 2 * (n - 1) * fun(x, n - 2);
}
int main()
{
  double x = 0;
  int n = 0;
  cin >> n >> x;
  cout << fixed << setprecision(2) << fun(x, n) * 1.0;
  return 0;
}