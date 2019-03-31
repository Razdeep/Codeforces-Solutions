// https://codeforces.com/contest/1144/problem/C

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MAX = 2 * 1e5 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int frequency[MAX];
    memset(frequency, 0, MAX * sizeof(int));
    int n;
    cin >> n;
    vector<int> arr_a, arr_b;
    bool valid_solution = true;
    for (int i = 0; i < n; i++)
    {
        int this_element;
        cin >> this_element;
        if (frequency[this_element] == 0)
        {
            frequency[this_element]++;
            arr_a.push_back(this_element);
        }
        else if (frequency[this_element] == 1)
        {
            frequency[this_element]++;
            arr_b.push_back(this_element);
        }
        else
        {
            valid_solution = false;
            break;
        }
    }
    if (valid_solution)
    {
        cout << "Yes" << endl;
        sort(all(arr_a));
        sort(all(arr_b));
        reverse(all(arr_b));
        cout << arr_a.size() << endl;
        for (int i = 0; i < arr_a.size(); i++)
            cout << arr_a[i] << " ";
        cout << endl;
        cout << arr_b.size() << endl;
        for (int i = 0; i < arr_b.size(); i++)
            cout << arr_b[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}