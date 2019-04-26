// https://codeforces.com/contest/1152/problem/B
// NOT SOLVED
#include <bits/stdc++.h>
#define debug(x) cerr << "x-> " << x << endl
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
ll no_of_bits(ll n)
{
    int count = 0;
    while (n >> count)
    {
        count++;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    vector<int> answer;
    int max_bits = no_of_bits(x);
    queue<int> myqueue;
    myqueue.push(x);
    while(!myqueue.empty())
    {
        int this_element = myqueue.front();
        myqueue.pop();
        myqueue.push(this_element + 1);
        
    }
    return 0;
}