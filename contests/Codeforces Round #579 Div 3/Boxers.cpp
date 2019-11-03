#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; ++i)	cin >> arr[i];
	sort(all(arr));
	set<int> myset;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] - 1 >= 1 && myset.find(arr[i] - 1) == myset.end()) //not found
		{
			myset.insert(arr[i] - 1);
		}
		else if (myset.find(arr[i]) == myset.end())
		{
			myset.insert(arr[i]);
		}
		else if (arr[i] + 1 <= 150001)
		{
			myset.insert(arr[i] + 1);
		}	
	}
	cout << myset.size() << endl;
	return 0;
}
