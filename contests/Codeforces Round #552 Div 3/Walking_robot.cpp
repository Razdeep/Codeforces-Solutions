// https://codeforces.com/contest/1154/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int path_length, battery_capacity, solar_capacity;
    int max_path_covered = 0;
    cin >> path_length >> battery_capacity >> solar_capacity;
    int battery = battery_capacity;
    int solar = solar_capacity;
    for (int i = 0; i < path_length; i++)
    {
        bool this_exposed;
        cin >> this_exposed;
        if (this_exposed && battery && solar < solar_capacity)
        {
            max_path_covered++;
            battery--;
            solar++;
        }
        else if(solar){
            max_path_covered++;
            solar--;
        }
        else if(battery)
        {
            max_path_covered++;
            battery--;
        }
    }
    cout << max_path_covered << endl;
    return 0;
}