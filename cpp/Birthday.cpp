// https://codeforces.com/problemset/problem/1131/C
/**
 * Explanation:
 * Such circular arrangement would be only possible when, we can first
 * sort the given array. Then we have to partition the array into two in an
 * alternative pattern so the consecutive elements of the the partitioned
 * array have the least difference.
 * The best way to form a circle with least consecutive difference is by
 * reversing one of the partitioned array and joining them.
 * The concept can be easily understood intuitively.
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    std::sort(all(arr));
    vector<int> part_a, part_b;
    int flag = true;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            part_a.push_back(arr[i]);
            flag = false;
        }
        else
        {
            part_b.push_back(arr[i]);
            flag = true;
        }
    }
    for (int i = 0; i < part_a.size(); i++)
        cout << part_a[i] << " ";
    for (int i = part_b.size() - 1; i >= 0; i--)
        cout << part_b[i] << " ";
    cout << endl;
    return 0;
}