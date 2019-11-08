// https://codeforces.com/contest/1215/problem/A
	#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <algorithm>
#define deb(x) cerr << #x << ": " << x << endl;
using namespace std;
int main()
{
	int a1, a2, k1, k2, n;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	if (k1 >= k2) // Make sure k1 < k2
	{
		swap(k1, k2);
		swap(a1, a2);
	}
	deb(&mdash);
	//deb(a1);
	//deb(k1);
	// k1 < k2
	// Calculating minimum
	cout << (n / (a1 + a2)) << " ";
	// Calculating maximum
	int disqualified_so_far = min(a1, n / k1);
	int remaining_cards = n - disqualified_so_far;
	int  additional_disqualified = min(a2, remaining_cards / k2);
	cout << (disqualified_so_far + additional_disqualified) << endl;
	return 0;
}
