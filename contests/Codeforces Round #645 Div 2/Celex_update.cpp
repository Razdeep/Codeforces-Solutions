// https://codeforces.com/contest/1358/problem/C
// @TODO
#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

int binomialCoeffUtil(int n, int k, int** dp) 
{ 
    // If value in lookup table then return 
    if (dp[n][k] != -1) //      
        return dp[n][k]; 
  
    // store value in a table before return 
    if (k == 0) { 
        dp[n][k] = 1; 
        return dp[n][k]; 
    } 
      
    // store value in table before return 
    if (k == n) { 
        dp[n][k] = 1;  
        return dp[n][k]; 
    } 
      
    // save value in lookup table before return 
    dp[n][k] = binomialCoeffUtil(n - 1, k - 1, dp) + 
               binomialCoeffUtil(n - 1, k, dp); 
    return dp[n][k]; 
} 
  
int binomialCoeff(int n, int k) 
{ 
    int** dp; // make a temporary lookup table 
    dp = new int*[n + 1]; 
  
    // loop to create table dynamically 
    for (int i = 0; i < (n + 1); i++) { 
        dp[i] = new int[k + 1]; 
    } 
  
    // nested loop to initialise the table with -1 
    for (int i = 0; i < (n + 1); i++) { 
        for (int j = 0; j < (k + 1); j++) { 
            dp[i][j] = -1; 
        } 
    } 
  
    return binomialCoeffUtil(n, k, dp); 
} 

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2 || y1 == y2) {
            cout << 1 << endl;
            continue;
        }

        cout << binomialCoeff(abs(x1 - y1) + abs(x2 - y2), abs(x1 - x2)) << endl;
    }
}