#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int moves;
        cin >> moves; 
        int min_moves = (moves & 1 ? moves / 2 + 1 : moves / 2);
        int rock, paper, scissors;
        cin >> rock >> paper >> scissors;
        string bob_moves;
        cin >> bob_moves;
        vector<char> ans(moves, 0);
        int target = 0;
        bool done = false;
        for (int i = 0; i < moves; ++i)
        {
            if (bob_moves[i] == 'R')
            {
                if (paper)
                {
                    ans[i] = 'P';
                    paper--;
                    target++;
                }
            }
            else if (bob_moves[i] == 'P')
            {
                if (scissors)
                {
                    ans[i] = 'S';
                    scissors--;
                    target++;
                }
            }
            else if (bob_moves[i] == 'S')
            {
                if (rock)
                {
                    ans[i] = 'R';
                    rock--;
                    target++;
                }
            }
            if (target >= min_moves)
            {
                done = true;
                break;
            }
        }
        if (done)
        {
            cout << "YES" << endl;
            for (int i = 0; i < moves; ++i)
            {
                if (ans[i] == 0)
                {
                    if (rock)
                    {
                        cout << 'R';
                        rock--;
                    }
                    else if (paper)
                    {
                        cout << 'P';
                        paper--;
                    }
                    else
                    {
                        cout << 'S';
                        scissors--;
                    }
                }
                else
                {
                    cout << ans[i];
                }
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}