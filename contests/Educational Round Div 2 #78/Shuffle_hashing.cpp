// https://codeforces.com/contest/1278/problem/A
#include <iostream>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string text, hash_text;
		cin >> text >> hash_text;
		sort(all(text));
		int n = int(text.size());
		int yes = false;
		for (int i = 0; i + n - 1 < hash_text.size(); ++i)
		{
			string tmp = "";
			for (int j = i; j < i + n; ++j)
				tmp += hash_text[j];
			sort(all(tmp));
			if (text == tmp)
			{
				yes = true;
				break;
			}
		}
		cout << (yes ? "YES" : "NO") << endl;
	}
	return 0;
}