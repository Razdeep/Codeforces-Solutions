// https://codeforces.com/contest/1144/problem/B
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr_even, arr_odd;
    for (int i = 0; i < n; i++)
    {
        int this_element;
        cin >> this_element;
        if (this_element & 1)
            arr_odd.push_back(this_element);
        else
            arr_even.push_back(this_element);
    }
    if (abs(arr_odd.size() - arr_even.size() <= 1))
        cout << 0 << endl;
    else
    {
        std::sort(all(arr_even));
        std::sort(all(arr_odd));
        std::reverse(all(arr_even));
        std::reverse(all(arr_odd));
        int answer = -1;
        if (arr_odd.size() > arr_even.size())
        {
            int difference_size = arr_odd.size() - arr_even.size() - 1;
            answer = std::accumulate(arr_odd.begin() + arr_even.size() + 1, arr_odd.end(), 0);
        }
        if (arr_even.size() > arr_odd.size())
        {
            int difference_size = arr_even.size() - arr_odd.size() - 1;
            answer = std::accumulate(arr_even.begin() + arr_odd.size() + 1, arr_even.end(), 0);
        }
        cout << answer << endl;
    }
    return 0;
}