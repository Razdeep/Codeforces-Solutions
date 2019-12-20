// https://codeforces.com/contest/1324/problem/D
/**
 * For ease of implementation and calculation,
 * Consider changing equality from    ai + aj > bi + bj    to   ai - bi + aj - bj > 0
 * Thus we can maintain an intermediate array of a - b
 * The problem becomes simplified to count number of pairs of indices whose difference is greater than 0
 * To make such pair, it is mandatory to select atleast one positive from the pair of indices 
 */
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;
using namespace std;

int main()
{
	int no_of_topics;
	cin >> no_of_topics;

	vector<ll> teacher_interest(no_of_topics);
	vector<ll> student_interest(no_of_topics);

	for (int i = 0; i < no_of_topics; ++i)
		cin >> teacher_interest[i];

	for (int i = 0; i < no_of_topics; ++i)
		cin >> student_interest[i];

	vector<ll> diff(no_of_topics, 0);

	for (int i = 0; i < no_of_topics; ++i)
		diff[i] = teacher_interest[i] - student_interest[i];
	
	sort(all(diff));

	ll ans = 0;

	for (int i = 0; i < no_of_topics; ++i)
	{
		if (diff[i] <= 0)
			continue;

		auto it = std::lower_bound(all(diff), -diff[i] + 1); // Since we are finding a number strictly greater than 0
		ans += i - std::distance(diff.begin(), it);
	}

	cout << ans << endl;
	return 0;
}
