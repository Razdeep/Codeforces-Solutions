// https://codeforces.com/contest/1249/problem/C1
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
typedef long long ll;
using namespace std;
void debv(vector<int>& v)
{
    cout << "[ ";
    for (auto& i: v)
        cout << i << " ";
    cout << "] " << endl;
}
ll power(ll x, ll y) 
{
    if (x == 0)
        return 0;
    if (y == 0) 
        return 1; 

    ll tmp = power(x, y / 2);

    if (y % 2 == 0) 
        return tmp * tmp; 
    else
        return x * tmp * tmp; 
} 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        ll n;
        cin >> n;
        vector<int> trinary;
        ll cp_n = n;
        while(n)
        {
            trinary.push_back(n % 3);
            n /= 3;
        }
        n = cp_n;
        // reverse(all(trinary));
        // debv(trinary);
        for (int i = 0; i + 1 < int(trinary.size()); ++i)
        {
            if (trinary[i] > 1)
            {
                trinary[i] = 0;
                trinary[i + 1]++;
                for (int j = i; j >= 0; --j)
                    trinary[j] = 0;
            }
        }
        int sz = trinary.size();
        if (trinary[sz - 1] > 1)
        {
            trinary[sz - 1] = 0;
            trinary.push_back(1);
            for (int j = sz - 1; j >= 0; --j)
                    trinary[j] = 0;
        }
        // debv(trinary);
        ll ans = 0;
        for (int i = 0; i < int(trinary.size()); ++i)
        {
            ans += (trinary[i] * power(3, i));
        }
        cout << ans << endl;
        // cout << "--------------------\n\n";
    }
    return 0;
}