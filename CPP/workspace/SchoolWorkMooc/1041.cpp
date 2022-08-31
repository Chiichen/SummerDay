#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	if ((str[str.size() - 1] - '0') & 1)
		cout << "odd";
	else
		cout << "even";
	return 0;
}