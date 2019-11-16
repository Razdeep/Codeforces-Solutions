// https://codeforces.com/contest/1253/problem/B
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#define debx(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    set<int> already_visited;
    vector<int> pq;
    vector<int> ans;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (already_visited.find(arr[i]) != already_visited.end()) // found
        {
            cout << -1 << endl;
            return 0;
        }
        if (arr[i] > 0)
        {
            pq.push_back(arr[i]);
            already_visited.insert(arr[i]);
            cnt++;
        }
        else
        {
            if (already_visited.find(arr[i]) != already_visited.end()) // found
            {
                cout << -1 << endl;
                return 0;
            }
            if (already_visited.find(arr[i] * (-1)) == already_visited.end()) // not found
            {
                cout << -1 << endl;
                return 0;
            }
            else
            {
                pq.erase(std::find(pq.begin(), pq.end(), arr[i] * (-1)));
                already_visited.insert(arr[i]);
            }
        }
        if (pq.empty())
        {
            ans.push_back(cnt);
            already_visited.clear();
            cnt = 0;
        }
    }
    if (pq.size())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); ++i)
            cout << 2 * ans[i] << " ";
        cout << endl;
    }
    return 0;
}