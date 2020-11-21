// https://codeforces.com/contest/1119/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &it: a) {
        cin >> it;
    }

    if (a[0] != a[n - 1]) {
        cout << (n - 1) << endl;
        return 0;
    }

    int i = 0;
    int j = n - 1;
    int dist_a = int(-1e9);
    int dist_b = int(-1e9);

    while (i < j && a[i] == a[j]) {
        i++;
    }
    dist_a = (j - i);

    i = 0;
    j = n - 1;
    while (i < j && a[i] == a[j]) {
        j--;
    }
    dist_b = (j - i);

    cout << max(dist_a, dist_b) << endl;
    
    return 0;
}