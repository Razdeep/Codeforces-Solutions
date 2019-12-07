// https://codeforces.com/contest/1281/problem/A
#include <iostream>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string text, ans;
		cin >> text;
		int n = int(text.size());
		if (text.substr(n - 2, n) == "po")
			ans = "FILIPINO";
		else if (text.substr(n - 4, n) == "desu" || text.substr(n - 4, n) == "masu")
			ans = "JAPANESE";
		else
			ans = "KOREAN";
		cout << ans << endl;
	}
	return 0;
}
