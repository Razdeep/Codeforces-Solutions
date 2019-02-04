// https://codeforces.com/contest/1111/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
// int mydiv(int a, int b)
// {
//     return (a % b) ? (a / b + 1) : (a / b);
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int no_of_superheros, no_of_operations, max_operation_per_superhero;
    cin >> no_of_superheros >> no_of_operations >> max_operation_per_superhero;
    vector<int> superhero_power(no_of_superheros);
    for (int i = 0; i < no_of_superheros; i++)
    {
        cin >> superhero_power[i];
    }

    if (superhero_power.size() == 1)
    {
        cout << superhero_power[0] << endl;
    }
    else if (superhero_power.size() == 2)
    {
        float total_power = superhero_power[0] + superhero_power[1];
        cout << total_power << endl;
    }
    else
    {
        // std::sort(all(superhero_power));
        // int count = 0;
        // float total_power = 0;
        // for (int i = no_of_superheros - 1; i >= no_of_operations / 2; i--)
        // {
        //     total_power += superhero_power[i];
        //     count++;
        // }
        // int max_boost = std::min(no_of_operations / 2, max_operation_per_superhero * mydiv(no_of_operations, 2)); // NOT THIS
        // total_power += max_boost;
        // total_power /= count;
        // cout << total_power << endl;

        if (no_of_operations >= no_of_superheros)
        {
            cout << superhero_power[superhero_power.size() - 1] + (no_of_operations - no_of_superheros + 1);
            return 0;
        }
        else
        {
            float total_power = 0;
            for (int i = no_of_operations; i < no_of_superheros; i++)
            {
                total_power += superhero_power[i];
            }
            cout << total_power << endl;
        }
    }
    return 0;
}