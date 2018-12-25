// https://codeforces.com/contest/227/problem/A
/** Explanation: This is a simple vector problem.
 *   If the cross product is zero, then the hero has to move along it's previous direction
 *   If negative, to the left and if positive towards right
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll starting_x, starting_y, intermediate_x, intermediate_y, final_x, final_y;
    cin >> starting_x >> starting_y >> intermediate_x >> intermediate_y >> final_x >> final_y;
    ll AB_x = intermediate_x - starting_x;
    ll AB_y = intermediate_y - starting_y;
    ll BC_x = final_x - intermediate_x;
    ll BC_y = final_y - intermediate_y;

    ll cross_product = (AB_x * BC_y) - (AB_y * BC_x);
    if(cross_product==0)
    cout<<"TOWARDS"<<endl;
    else if(cross_product>0)
    cout<<"LEFT"<<endl;
    else
    cout<<"RIGHT"<<endl;
    return 0;
}