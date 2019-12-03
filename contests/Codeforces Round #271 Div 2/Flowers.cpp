// https://codeforces.com/problemset/problem/474/D

/**
 * Explanation:
 * 
 *	Let f(n) represent the number of meals of length n.
 *
 *	The first flower can either be red or white. If the first flower is red, the remaining can be counted as f(n-1)
 *	If the first flower is white, the next k-1 flowers are forced to be white, the remaining can be counted as f(n-k)
 *
 *	f(n) = f(n-1) + f(n-k) 
 *
 *	We build a table using this recursion formula.
 *
 *	Then build another vector sum, sum[i] = f(1) + f(2) + ... + f(i)
 *
 *	Now, the number of meals in between a and b is sum(b) - sum(a - 1). This is quicker than calculating the sum in the table every time. 
 *
 *	There were overflow issues. To avoid them, take mod with the required value while building the table itself. In this problem, Period = 1e9 + 7
 *	f(i) = f(i)% Period, every time we calculate f(i)
 *
 *	sum(i) = sum(i)% Period, after every time sum(i) is calculated. (There will be overflow if Period isn't applied to calculated in f(i) but only calculated here.)
 *
 *	Lastly, answer = (sum(b) - sum(a+1) + Period)%Period,
 *
 *	Every sum(i) is less than Period, so their difference is guaranteed to be less than Period. So, why do we take mod Period here ? It looks unnecessary.
 *	Because every sum(i) is stored % Period. It is possible for sum(b) < sum(a), In that case the answer would be negative. This is why we add Period and take modulus with it. 
 * 
 * 
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int queries, group_size;
	cin >> queries >> group_size;

	const int MAX = 1e5 + 1, MOD = 1e9 + 7;

	// preprocessing number of ways till i
	vector<int> count_ways(MAX, 0);

	for (int i = 0; i < MAX; ++i)
	{
		if (i < group_size)
			count_ways[i] = 1;

		else
			count_ways[i] = (count_ways[i - 1] + count_ways[i - group_size]) % MOD;
	}

	// Calculating cumulative sum
	vector<int> count_ways_cum(MAX, 0);

	for (int i = 1; i < MAX; ++i)
		count_ways_cum[i] = (count_ways_cum[i - 1] + count_ways[i]) % MOD;

	// Answering the queries
	while (queries--)
	{
		int a, b;
		cin >> a >> b;
		cout << (count_ways_cum[b] - count_ways_cum[a - 1] + MOD) % MOD << endl;
	}
	return 0;
}