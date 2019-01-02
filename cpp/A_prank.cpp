// https://codeforces.com/contest/1062/problem/A
// NOT CHECKED
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count_deleted = 1;
    for (int i = 0; i + 1 < n; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
            count_deleted++;
    }
    cout << count_deleted - 2 << endl;
    return 0;
}