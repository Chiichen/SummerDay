#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
  stack<char> st;
  string input;
  string output;
  cin >> input;
  for (auto e : input)
  {
    st.push(e);
  }
  stack<char> st2 = st;
  if (st2.top() == 'r')
  {
    st2.pop();
    if (st2.top() == 'e')
      st2.pop();
    while (!st2.empty())
    {
      output.push_back(st2.top());
      st2.pop();
    }
    reverse(output.begin(), output.end());
    cout << output;
    return 0;
  }
  st2 = st;
  if (st2.top() == 'y')
  {
    st2.pop();
    if (st2.top() == 'l')
      st2.pop();
      while (!st2.empty())
      {
        output.push_back(st2.top());
        st2.pop();
      }
    reverse(output.begin(), output.end());
    cout << output;
    return 0;
  }
  st2 = st;
  if (st2.top() == 'g')
  {
    st2.pop();
    if (st2.top() == 'n')
    {
      st2.pop();
      if (st2.top() == 'i')
        st2.pop();
        while (!st2.empty())
        {
          output.push_back(st2.top());
          st2.pop();
        }
    }
    reverse(output.begin(), output.end());
    cout << output;
    return 0;
  }
  cout<<input;
  return 0;
}