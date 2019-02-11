// https://codeforces.com/contest/1114/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];
    std::sort(all(array));
    vector<vector<int>> array_array(k);
    bool status = true;
    while (status)
    {
        for (int i = 0; i < k; i++)
        {
            if (array.empty())
            {
                status = false;
                break;
            }
            else
            {
                array_array[i].push_back(array[array.size() - 1]);
                array.pop_back();
            }
        }
        if (status)
            for (int i = k - 1; i >= 0; i--)
            {
                if (array.empty())
                {
                    status = false;
                    break;
                }
                else
                {
                    array_array[i].push_back(array[array.size() - 1]);
                    array.pop_back();
                }
            }
    }
    for(int i=0;i<k;i++)
    {

    }
    return 0;
}