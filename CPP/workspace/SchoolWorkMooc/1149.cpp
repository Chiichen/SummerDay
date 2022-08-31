#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  getline(cin, a);
  int max = 0, max1, max2;
  int sum = 0;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if (a[i] != ' ' && a[i] != '.')
      sum++;
    else
    {
      if (sum > max)
      {
        max = sum;
        max1 = i - sum;
        max2 = i - 1;
      }
      sum = 0;
    }
  }
  for (int i = max1; i <= max2; i++)
    cout << a[i];
  return 0;
}
