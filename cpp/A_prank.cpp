// https://codeforces.com/contest/1062/problem/A
// NOT CHECKED
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int totalStreak=1;
    int numberOfChain=0;
    for(int i=0;i+1<n;i++)
    {
        if(arr[i]+1==arr[i+1])
        totalStreak++;
        else
        numberOfChain++;
    }
    if(numberOfChain==0)
    cout<<totalStreak-1<<endl;
    else
    // cout<<totalStreak-(2*numberOfChain)<<endl;
    cout<<totalStreak-2<<endl;
    return 0;
}