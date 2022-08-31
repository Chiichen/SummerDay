#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
  if (s == "")
    return true;
  if (t == "")
    return false;
  if (s.size() > t.size())
    return false;

  int sn = s.size(), tn = t.size();
  for (int i = 0; i < tn; i++)
  {
    int count = 0;
    if (t[i] == s[0])
    {
      int k = i;
      for (int j = 0; j < sn; j++)
      {
        for (; k < tn; k++)
        {
          if (t[k] == s[j])
          {
            ++count;
            ++k;
            break;
          }
        }
      }
      if (count == sn)
        return true;
    }
  }
  return false;
}
int main()
{
  string str1;
  string str2;
  cin >> str1 >> str2;
  if (str1.size() < str2.size())
    swap(str1, str2);
  if (str1.size() == str2.size() && str1 != str2)
  {
    cout << "No substring";
    return 0;
  }
  if (isSubsequence(str2, str1))
    cout << str2 << " is substring of " << str1;
  else
    cout << "No substring";
  return 0;
}