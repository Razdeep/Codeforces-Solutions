// https://codeforces.com/contest/1118/problem/B
/**
 * @author: Rajdeep Roy Chowdhury <rrajdeeproychowdhury@gmail.com>
 * ------------------
 * Explanation:
 * ------------------
 * Since the constraints are high, therefore brute-force[O(n^2)] won't work.
 * We have to come up with an efficient idea. The approach is to maintain
 * something like cumulative sum arrays. Particularly in this solution,
 * we need to maintain cumulative sum of odd indexed numbers and cumulative
 * sum of even indexed numbers.
 *   Main Idea: If we remove an element from an array, the final odd indexed
 * numbers would be the 'sum of sum of the odd indexed numbers upto array[index] and
 * sum of the even indexed numbers from array[index + 1] to the end'. 
 * Similary, the final even indexed numbers would be 
 * 'sum of the even indexed numbers upto array[index] and the odd indexed numbers 
 * from array[index + 1] to the end'.
 *   To simplify, the process even further, we can calculate the cumulative sum
 * in the reverse order that would assist us to calculate the "cumulative
 * sum of odd or even number from array[index + 1] to the end" in a small time.
 * 
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> arr(n + 1, 0), prefixSumOdd(n + 2, 0), prefixSumEven(n + 2, 0);
    vector<ll> suffixSumOdd(n + 2, 0), suffixSumEven(n + 2, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    // Calculating the prefix cumulative sum
    for (int i = 1; i <= n; i++)
    {
        prefixSumEven[i] = prefixSumEven[i - 1];
        prefixSumOdd[i]  = prefixSumOdd [i - 1];
        if (i % 2 == 0)
            prefixSumEven[i] += arr[i];
        else
            prefixSumOdd[i]  += arr[i];
    }

    // Calculating the suffix cumulative sum
    for (int i = n; i >= 1; i--)
    {
        suffixSumEven[i] = suffixSumEven[i+1];
        suffixSumOdd[i] = suffixSumOdd[i+1];
        if (i%2 == 0)
            suffixSumEven[i] += arr[i];
        else
            suffixSumOdd[i] += arr[i];
    }
    ll count = 0;
    // Actual calculation
    for(int i=1; i<=n; i++)
    {
        if( (prefixSumEven[i-1] + suffixSumOdd[i+1])
                == (prefixSumOdd[i-1] + suffixSumEven[i+1]) )
            count++;
    }
    cout << count << endl;
    return 0;
}