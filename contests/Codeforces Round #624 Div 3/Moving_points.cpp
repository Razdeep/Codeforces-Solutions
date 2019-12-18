// https://codeforces.com/contest/1311/problem/F
/**
 * Rating: 2100
 * Concepts: Count inversions with segment trees
 * 
 * Idea: @TODO
 *
 *
 */
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define all(v) v.begin(), v.end()
typedef long long ll;
using namespace std;

struct Point
{
	ll position, velocity;
	Point() {}
	Point(ll position, ll velocity): position(position), velocity(velocity) {}
};

bool sort_by_position(Point first, Point second)
{
	return first.position < second.position;
}

void update(vector<pair<ll, int>> &sum_tree, int idx, int left, int right, int pos, ll value)
{

}

pair<ll, int> get(const vector<pair<ll, int>> &sum_tree, int idx, int left, int right, int query_left, int query_right)
{
	if (query_right < left || query_left > right || query_left > query_right)
		return make_pair(0, 0);

	if (query_left <= left && query_right >= right)
		return sum_tree[idx];

	int mid = (left + right) >> 1;

	pair<ll, int> left_answer = get(sum_tree, 2 * idx + 1, left, mid, query_left, query_right);

	pair<ll, int> right_answer = get(sum_tree, 2 * idx + 2, mid + 1, right, query_left, query_right);

	pair<ll, int> res;

	res.first  = left_answer.first + right_answer.first;
	res.second = left_answer.second + right_answer.second;

	return res;
}

int main()
{
	constexpr int MAX_N = 2e5 + 5;
	vector<pair<ll, int>> sum_tree(3 * MAX_N, make_pair(0, 0));

	int no_of_points;
	cin >> no_of_points;

	vector<struct Point> pointList(no_of_points);

	for (int i = 0; i < no_of_points; ++i)
		cin >> pointList[i].position;
	
	vector<ll> velocities(no_of_points, 0);

	for (int i = 0; i < no_of_points; ++i)
	{
		cin >> pointList[i].velocity;
		velocities[i] = pointList[i].velocity;
	}

	sort(all(pointList), sort_by_position);
	sort(all(velocities));

	// Populating effective indices

	map<ll, int> effective_index;
	effective_index[velocities[0]] = 1;

	for (int i = 1; i < no_of_points; ++i)
	{
		if (velocities[i] == velocities[i - 1])
			continue;

		effective_index[velocities[i]] = effective_index[velocities[i - 1]] + 1;
	}

	ll ans = 0;

	for (int i = 0; i < no_of_points; ++i)
	{
		// pair<ll, int> Q = get(1, 1, no_of_points, 
		// @TODO
	}

	cout << ans << endl;
	return 0;
}
