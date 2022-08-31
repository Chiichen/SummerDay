#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
const int N = 1005;
string SubZero(string &s1)
{
  string s2;
  int i_i;
  for (; s1[i_i] == '0'; i_i++)
  {
  }
  for (int j = 0; j < s1.size() - i_i; j++)
  {
    s2.push_back(s1[i_i + j]);
  }
  s1 = s2;
  return s2;
}
struct bign
{
  int len, s[N];
  bign()
  {
    memset(s, 0, sizeof(s));
    len = 1;
  }
  bign(int num) { *this = num; }
  bign(char *num) { *this = num; }
  bign operator=(int num)
  {
    char c[N];
    sprintf(c, "%d", num);
    *this = c;
    return *this;
  }
  bign operator=(const char *num)
  {
    len = strlen(num);
    for (int i_i = 0; i_i < len; i_i++)
      s[i_i] = num[len - 1 - i_i] - '0';
    return *this;
  }
  string str()
  {
    string res = "";
    for (int i_i = 0; i_i < len; i_i++)
      res = (char)(s[i_i] + '0') + res;
    return res;
  }
  void clean()
  {
    while (len > 1 && !s[len - 1])
      len--;
  }
  bign operator+(const bign &b)
  {
    bign c;
    c.len = 0;
    for (int i_i = 0, g = 0; g || i_i < len || i_i < b.len; i_i++)
    {
      int x = g;
      if (i_i < len)
        x += s[i_i];
      if (i_i < b.len)
        x += b.s[i_i];
      c.s[c.len++] = x % 10;
      g = x / 10;
    }
    return c;
  }
  bign operator-(const bign &b)
  {
    bign c;
    c.len = 0;
    int x;
    for (int i_i = 0, g = 0; i_i < len; i_i++)
    {
      x = s[i_i] - g;
      if (i_i < b.len)
        x -= b.s[i_i];
      if (x >= 0)
        g = 0;
      else
      {
        x += 10;
        g = 1;
      };
      c.s[c.len++] = x;
    }
    c.clean();
    return c;
  }
  bign operator*(const bign &b)
  {
    bign c;
    c.len = len + b.len;
    for (int i_i = 0; i_i < len; i_i++)
      for (int j = 0; j < b.len; j++)
        c.s[i_i + j] += s[i_i] * b.s[j];
    for (int i_i = 0; i_i < c.len - 1; i_i++)
    {
      c.s[i_i + 1] += c.s[i_i] / 10;
      c.s[i_i] %= 10;
    }
    c.clean();
    return c;
  }
  bool operator<(const bign &b)
  {
    if (len != b.len)
      return len < b.len;
    for (int i_i = len - 1; i_i >= 0; i_i--)
      if (s[i_i] != b.s[i_i])
        return s[i_i] < b.s[i_i];
    return false;
  }
  bign operator+=(const bign &b)
  {
    *this = *this + b;
    return *this;
  }
  bign operator-=(const bign &b)
  {
    *this = *this - b;
    return *this;
  }
};
istream &operator>>(istream &in, bign &x)
{
  string s;
  in >> s;
  SubZero(s);
  x = s.c_str();
  return in;
}
ostream &operator<<(ostream &out, bign &x)
{
  out << x.str();
  return out;
}
int main()
{
	bign base=2;
	int k=0;
	cin>>k;
	if(k==0)
	{
		return 1;
	}
	while(k%2==0)
	{
		base=base*base;
		k/=2;
	}
	bign basetemp = base;
	for(int i=0; i<k-1; i++)
	{
		base=base*basetemp;
	}
	cout<<base;
	return 0;
}