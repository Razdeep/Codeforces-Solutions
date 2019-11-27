// https://codeforces.com/contest/1263/problem/B
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int no_of_pins;
        cin >> no_of_pins;
        vector<string> pin_list(no_of_pins);
        map<string, int> freq;
        for (int i = 0; i < no_of_pins; ++i)
        {
            cin >> pin_list[i];
            freq[pin_list[i]]++;
        }
        int tweak_count = 0;
        vector<string> ans;
        for (int i = 0; i < no_of_pins; ++i)
        {
            if (freq[pin_list[i]] == 1)
            {
                ans.push_back(pin_list[i]);
            }
            else
            {
                string temporary_pin = pin_list[i];
                for (int j = 0; j <= 9; ++j)
                {
                    temporary_pin[0] = j + '0';
                    if (freq[temporary_pin] == 0)
                    {
                        freq[temporary_pin]++;
                        ans.push_back(temporary_pin);
                        freq[pin_list[i]]--;
                        tweak_count++;
                        break;
                    }
                }
            }
        }
        cout << tweak_count << endl;
        for (auto this_pin : ans)
            cout << this_pin << endl;
    }
    return 0;
}