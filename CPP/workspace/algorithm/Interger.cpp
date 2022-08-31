#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <Interger.exe>
using namespace std;

string SubZero(string &s1)
{
	string s2;
	int add = 10;
	int i = 0;
	for (; s1[i] == '0'; i++)
	{
	}
	for (int j = 0; j < s1.size() - i; j++)
	{
		s2.push_back(s1[i + j]);
	}
	s1 = s2;
	return s2;
}

static int sizeTable[10] = {9, 99, 999, 9999, 99999, 999999, 9999999,
							99999999, 999999999, INT_MAX};
int IntSize(int x)
{
	for (int i = 0;; i++)
		if (x <= sizeTable[i])
			return i + 1;
}
struct Interger
{
	vector<int> values;
	int size = 0;
	Interger(int i) { *this = move(i); }
	Interger(char *ch) { *this = ch; }
	Interger(string str) { *this = str; }
	Interger() {}
	Interger operator=(int &&num)
	{
		size = IntSize(num);
		values.clear();
		for (int i = 0; i < size; i++)
		{
			values.push_back(num % 10);
			num /= 10;
		}
		return *this;
	}
	Interger operator=(const char *ch)
	{
		string s1(ch);
		size = s1.size();
		values.clear();
		for (int i = 0; i < size; i++)
			values.push_back(s1[i] - '0');
		return *this;
	}
	Interger operator=(const string &str)
	{
		string s2(str);
		size = s2.size();
		values.clear();
		for (int i = 0; i < size; i++)
			values.push_back(s2[i] - '0');
		return *this;
	}
	Interger operator=(const Interger &Int)
	{
		size = Int.size;
		values.assign(Int.values.begin(), Int.values.end());
		return *this;
	}
	Interger operator*(const Interger &Int)
	{
	}
	Interger operator*(int &&num)
	{

		Interger ans;
		ans.size = size + IntSize(num);
		for (int j = 0; j < size; j++)
			ans.values.push_back(values[j] * num);
		ans.values.resize(ans.size + 1, 0);
		for (int j = 0; j < ans.size; j++)
		{
			ans.values[j + 1] += ans.values[j] / 10;
			ans.values[j] %= 10;
		}
		return ans;
	}

	// Interger BigProduct(int&& num, int&& Add)
	//{
	//     Interger ans;
	//     ans.size = size + IntSize(num);
	//     for (int j = 0; j < size; j++)
	//         ans.values.push_back(values[j] * num);
	//     ans.values.resize(ans.size + 1, 0);
	//     for (int j = 0; j < ans.size; j++)
	//     {
	//         ans.values[j + 1] += ans.values[j] / Add;
	//         ans.values[j] %= Add;
	//     }
	//     ans.values.insert(ans.values.begin(), IntSize(Add), 0);
	//     return ans;
	// }
};

ostream &operator<<(ostream &out, Interger &x)
{

	int i = x.size - 1;
	for (; x.values[i] == 0; i--)
		;
	for (; i >= 0; i--)
	{
		out << x.values[i];
	}
	return out;
}

int main()
{
	Interger ans = 1;
	int k = 0;
	cin >> k;
	if (k == 0)
	{
		cout << 1;
		return 0;
	}
	if (k == 1)
	{
		cout << 1;
		return 0;
	}

	for (int i = 1; i <= k; i++)
	{
		ans = ans * move(i);
	}
	cout << ans;
}