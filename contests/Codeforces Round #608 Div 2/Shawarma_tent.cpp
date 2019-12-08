// https://codeforces.com/contest/1271/problem/C
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int distance(pair<int, int>& a, pair<int, int>& b)
{
	return abs(a.first - b.first) + abs(a.second - b.second);
}
int main()
{
	int no_of_students;
	pair<int, int> school;
	cin >> no_of_students >> school.first >> school.second;
	vector<pair<int, int>> students;
	for (int i = 0; i < no_of_students; ++i)
	{
		pair<int, int> this_student;
		cin >> this_student.first >> this_student.second;
		
		students.push_back(this_student);
	}

	// TOP
	pair<int, int> best_target;
	pair<int, int> target = make_pair(school.first, school.second + 1);
	int cnt = 0, max_cnt = INT_MIN;
	for (int i = 0; i < students.size(); ++i)
	{
		if (distance(school, students[i]) != 0)
			cnt += (distance(target, students[i]) < distance(students[i], school));
	}
	if (cnt > max_cnt)
	{
		best_target = target;
		max_cnt = cnt;
	}

	// LEFT
	target = make_pair(school.first - 1, school.second);
	cnt = 0;
	for (int i = 0; i < students.size(); ++i)
	{
		if (distance(school, students[i]) != 0)
			cnt += (distance(target, students[i]) < distance(students[i], school));
	}
	if (cnt > max_cnt)
	{
		best_target = target;
		max_cnt = cnt;
	}

	// RIGHT
	target = make_pair(school.first + 1, school.second);
	cnt = 0;
	for (int i = 0; i < students.size(); ++i)
	{
		if (distance(school, students[i]) != 0)
			cnt += (distance(target, students[i]) < distance(students[i], school));
	}
	if (cnt > max_cnt)
	{
		best_target = target;
		max_cnt = cnt;
	}

	// BOTTOM
	target = make_pair(school.first, school.second - 1);
	cnt = 0;
	for (int i = 0; i < students.size(); ++i)
	{
		if (distance(school, students[i]) != 0)
			cnt += (distance(target, students[i]) < distance(students[i], school));
	}
	if (cnt > max_cnt)
	{
		best_target = target;
		max_cnt = cnt;
	}

	cout << max_cnt << endl;
	cout << best_target.first << " " << best_target.second << endl;
	return 0;
}