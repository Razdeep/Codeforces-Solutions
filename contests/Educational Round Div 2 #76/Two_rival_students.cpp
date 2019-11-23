// https://codeforces.com/contest/1257/problem/A
#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int no_of_students, no_of_swaps, position_1, position_2;
        cin >> no_of_students >> no_of_swaps >> position_1 >> position_2;
        if (position_1 > position_2)
            swap(position_1, position_2);
        int distance = position_2 - position_1;
        cout << min(no_of_students - 1, distance + no_of_swaps) << endl;
    }
    return 0;
}