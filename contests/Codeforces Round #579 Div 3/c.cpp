#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define deb(x) cerr << #x << " --> " << x << endl;
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
} 
ll countFactors(ll x)
{
	ll res = 0;
	for (ll i = 1; i * i <= x; ++i)
	{
		if (x % i == 0)
		{
			if (i != x / i)		res += 2;
			else			res++;
		}
	}
	return res;
}

int main()
{
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for (ll i = 0; i < n; ++i)	cin >> arr[i];
	sort(rall(arr));
	ll mygcd = arr[0];
	for (ll i = 0; i < n; ++i)	mygcd = gcd(mygcd, arr[i]);
	cout << countFactors(mygcd) << endl;
	return 0;
}
