// https://codeforces.com/contest/1213/problem/C
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		ll n, m;
		cin >> n >> m;
		vector<int> last_digits(10, 0);
		ll sum_of_cycle = 0LL;
		for (int i = 0; i < 10; ++i)
		{
			last_digits[i] = (m * (i + 1)) % 10;
			sum_of_cycle += last_digits[i];
		}
		ll divisible_numbers = n / m;
		ll answer = ((divisible_numbers / 10) * sum_of_cycle);
		for (int i = 0; i < divisible_numbers % 10; ++i)
			answer += last_digits[i];
		cout << answer << endl;
	}
	return 0;
}
