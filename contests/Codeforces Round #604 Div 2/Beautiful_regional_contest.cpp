// https://codeforces.com/contest/1265/problem/C
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int no_of_students;
		cin >> no_of_students;
		vector<int> arr(no_of_students);

		for (int i = 0; i < no_of_students; ++i)
			cin >> arr[i];

		int gold = 1, silver = 0, bronze = 0;
		int cur = arr[0];
		int i = 1;
		while (i < no_of_students && cur == arr[i])
		{
			gold++;
			i++;
		}
		cur = arr[i];

		for (; i < no_of_students && silver <= gold; ++i)
		{
			cur = arr[i];
			silver++;
		}
		while (i < no_of_students && cur == arr[i])
		{
			silver++;
			i++;
		}
		cur = arr[i];

		for (; i < no_of_students && bronze <= gold; ++i)
		{
			cur = arr[i];
			bronze++;
		}
		while (i < no_of_students && (cur == arr[i] || (gold + silver + bronze < no_of_students / 2)))
		{
			bronze++;
			i++;
		}
		cur = arr[i - 1];
		int after = arr[i];
		i--;

		while (arr[i] == after)
		{
			bronze--;
			i--;
		}

		if (gold + silver + bronze <= no_of_students / 2 && silver > gold && bronze > gold)
			cout << gold << " " << silver << " " << bronze << endl;
		else
			cout << "0 0 0\n";
	}
	return 0;
}