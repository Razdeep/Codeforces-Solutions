// https://codeforces.com/contest/754/problem/A
// NOT SOLVED
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int no_of_elements;
    cin>>no_of_elements;
    vector<int> arr(no_of_elements+1,-1);
    for(int i=1;i<=no_of_elements;i++)
    {
        cin>>arr[i];
    }
    if( no_of_elements==2 && (arr[1]==0 || arr[2]==0) )
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int this_sum=0,starting=1,ending=0;
    for(int i=1;i<=no_of_elements;i++)
    {
        this_sum+=arr[i];
        ending
        if()
    }

    return 0;
}