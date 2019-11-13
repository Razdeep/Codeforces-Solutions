// https://codeforces.com/contest/1249/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#define debx(x) cerr << #x << ": " <<x << endl;
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        bool reqd = false;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        for (int i = 0; i + 1 < n; ++i)
        {
            if (abs(arr[i] - arr[i + 1]) == 1)
            {
                reqd = true;
            }
        }
        cout << (reqd ? 2 : 1) << endl;
    }
    return 0;
}