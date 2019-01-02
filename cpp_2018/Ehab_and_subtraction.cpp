// https://codeforces.com/contest/1088/problem/B

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(all(arr));

    // Finding the unique vector
    auto ptr = std::unique(all(arr));
    arr.resize(std::distance(arr.begin(), ptr));

    int deducted_so_far = 0;
    int max_count_unique = arr.size();
    for (int i = 0; i < k; i++)
    {
        if (i >= max_count_unique)
        {
            cout << 0 << endl;
            continue;
        }
        int answer = arr[i] - deducted_so_far;
        deducted_so_far += answer;
        cout << answer << endl;
    }
    return 0;
}