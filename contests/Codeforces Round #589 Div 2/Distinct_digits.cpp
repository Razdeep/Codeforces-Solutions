#include <iostream>
#include <set>
using namespace std;
int hasDistinctDigits(int n)
{
	set<int> myset;
	while(n)
	{
		if (myset.find(n % 10) == myset.end())
		{
			myset.insert(n % 10);
		}
		else
			return false;
		n /= 10;
	}
	return true;
}
int main(){
	int l, r;
	cin >> l >> r;
	int ans = -1;
	for (int i = l; i <= r; ++i)
	{
		if (hasDistinctDigits(i))
		{
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
