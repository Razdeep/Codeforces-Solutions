#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
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
        map<int, int> last_occurence;
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            auto find_ptr = find(all(last_occurence), arr[i]);
            if (find_ptr != last_occurence.end()) // found
            {
                ans = max(ans, i - std::distance(last_occurence.begin(), find_ptr));
            }
        }
        
    }
    return 0;
}