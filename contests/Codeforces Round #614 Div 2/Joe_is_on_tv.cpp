#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float n;
	cin >> n;
	float sum = 0.0f;
	for (float i = 1; i <= n; ++i)
	{
		sum += 1 / i;
	}
	cout << std::fixed;
	cout << setprecision(12) << sum << endl;
	return 0;
}