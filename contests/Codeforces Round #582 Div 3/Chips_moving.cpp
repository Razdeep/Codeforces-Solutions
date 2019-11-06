// https://codeforces.com/contest/1213/problem/A
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> cnt_parity(2, 0);
	for (int i = 0; i < n; ++i)
	{
	       	cin >> arr[i];
		cnt_parity[arr[i] & 1]++;
	}
	cout << min(cnt_parity[0], cnt_parity[1]) << endl;
	return 0;
}
