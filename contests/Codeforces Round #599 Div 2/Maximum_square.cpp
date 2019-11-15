// https://codeforces.com/contest/1243/problem/A
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int tc; 
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int ans = INT_MIN;
        for (int len = 1; len <= 1000; ++len)
        {
            int cnt = 0;
            for (int i = 0; i < int(arr.size()); ++i)
                cnt += (arr[i] >= len);
            if (cnt >= len)
                ans = max(ans, len);
        }
        cout << ans << endl;
    }
    return 0;
}