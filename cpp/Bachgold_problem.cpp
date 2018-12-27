// https://codeforces.com/contest/749/problem/A
/** Explanation:
 *  We are told to make such a combination that has the max number of prime numbers
 *  and the sum of those prime numbers is n.
 *  The key point here to observe here is that it can be only achieved by using
 *  the smallest prime numbers 2 and 3. We have to use 2 as many times as possible.
 *  At last if there is no other option, a 3 is to be put.
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int count=0;
    vector<int> result;
    while(n>0)
    {
        if(n==3)
        {
            result.push_back(3);
            count++;
            break;
        }
        result.push_back(2);
        count++;
        n-=2;
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}