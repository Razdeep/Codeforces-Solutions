// https://codeforces.com/contest/1266/problem/A
/**
 * Reference : chinese remainder theorem,
 * if we want check if a number is divisible by 60
 * we have to check if it is divisible by 3 and 20
 * 
 */
#include <iostream>
#include <vector>
#include <numeric>
#define all(v) v.begin(), v.end()

using namespace std;

bool containsZero(vector<int> &arr)
{
	for (int &i : arr)
		if (i == 0)
			return true;
	return false;
}

bool contains2Zero(vector<int> &arr)
{
	int cnt = 0;
	for (int &i : arr)
		if (i == 0)
			cnt++;
	return cnt >= 2;
}
bool containsEven(vector<int> &arr)
{
	for (int &i : arr)
		if (i == 2 || i == 4 || i == 6 || i == 8)
			return true;
	return false;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string text;
		cin >> text;
		vector<int> arr(int(text.size()));
		for (int i = 0; i < int(text.size()); ++i)
			arr[i] = text[i] - '0';

		int sum = std::accumulate(all(arr), 0);

		cout << ((sum % 3 == 0) && (contains2Zero(arr) || (containsZero(arr) && containsEven(arr))) ? "red" : "cyan") << endl;
	}
	return 0;
}