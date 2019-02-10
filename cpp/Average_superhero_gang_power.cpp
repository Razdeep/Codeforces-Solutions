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
        std::sort(all(superhero_power));
        if (no_of_operations > superhero_power.size() - 1)
        {
            
            int max_boost = min((no_of_operations - ((int)superhero_power.size() - 1)), max_operation_per_superhero);
            std::cout << superhero_power[superhero_power.size() - 1] + max_boost << std::endl;
        }
        else
        {
            // cout<<"debug";
            int sum = 0, count = 0;
            for (int i = no_of_operations; i < superhero_power.size(); i++)
            {
                sum += superhero_power[i];
                count++;
            }
            float average_power = sum / count;
            cout << average_power << endl;
        }
    }
    return 0;
}