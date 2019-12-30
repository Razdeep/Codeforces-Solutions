// https://codeforces.com/contest/1266/problem/B
/**
 * Idea:
 * Sum of any two faces of any die is always 7.
 * So sum of all side faces would be (7 x 2 = 14).
 * The dice at the top would have one more face visible.
 * 
 */
#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		ll sum;
		cin >> sum;
		if (sum < 15)
		{
			cout << "No" << endl;
			continue;
		}
		int top_face = sum % 14LL;
		cout << (top_face >= 1 && top_face <= 6 ? "Yes" : "No") << endl;
	}	
	return 0;
}