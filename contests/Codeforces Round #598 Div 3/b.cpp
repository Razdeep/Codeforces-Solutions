// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        vector<int> arr(n);
        int min_ = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] < min_)
            {
                idx = i;
                min_ = arr[i];
            }
        }
        
    }
    return 0;
}