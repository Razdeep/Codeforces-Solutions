// https://codeforces.com/contest/1073/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> book_stack(n), book_preference(n);
	
	for (int i = 0; i < n; ++i)
		cin >> book_stack[i];
	
	for (int i = 0; i < n; ++i)
		cin >> book_preference[i];
	
	vector<bool> already_packed(n + 1, false);
	
	int j = 0;

	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		if (already_packed[book_preference[i]])
		{
			cout << 0 << " ";
			continue;
		}
		while (!already_packed[book_preference[i]])
		{
			already_packed[book_stack[j]] = true;
			count++;
			j++;
		}
		cout << count << " ";
	}
	return 0;
}
