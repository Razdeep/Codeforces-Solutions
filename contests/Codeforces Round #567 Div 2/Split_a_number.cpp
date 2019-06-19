// https://codeforces.com/contest/1181/problem/B
#include <bits/stdc++.h>
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fatafat                           \
    do                                    \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);                   \
    } while (0);
typedef long long ll;
using namespace std;

/**
 * @brief Returns the addition of two BigInts
 * 
 */
string addBigInt(string a, string b)
{
    string result;
    reverse(all(a));
    reverse(all(b));
    int carry = 0;
    int i;
    // Filling zeros
    while(a.size() < b.size())
        a += '0';

    while(b.size() < a.size())
        b += '0';

    for (i = 0; i < a.size(); i++)
    {
        int this_digit = (a[i] - '0') + (b[i] - '0') + carry;
        carry = this_digit / 10;
        this_digit %= 10;
        result.pb(this_digit + '0');
    }
    if (carry != 0)
        result.pb('1');
    reverse(all(result));
    return result;
}

/**
 * @brief Returns the minimum of the the two BigInts
 * 
 */
string minBigInt(string a, string b)
{
    if (a.size() == b.size())
    {
        ll i;
        For(i, a.size())
        {
            if (a[i] < b[i])
                return a;
            else if (b[i] < a[i])
                return b;
            else
                continue;
        }
        return a;
    }
    else
        return (a.size() < b.size() ? a : b);
}
void solve()
{
    ll n;
    cin >> n;
    string bigInt;
    cin >> bigInt;
    int index = n / 2;
    while (index >= 0 && bigInt[index] == '0')
    {
        index--;
    }
    string answer_a = addBigInt(bigInt.substr(0, index), bigInt.substr(index, bigInt.size()));
    index = n / 2 + 1;
    while (index < bigInt.size() && bigInt[index] == '0')
    {
        index++;
    }
    string answer_b = addBigInt(bigInt.substr(0, index), bigInt.substr(index, bigInt.size()));
    cout << minBigInt(answer_a, answer_b) << endl;
}
int main()
{
    fatafat;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll testcases = 1;
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}