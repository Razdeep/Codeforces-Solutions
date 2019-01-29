// https://codeforces.com/contest/1102/problem/B
// NOT SOLVED
/**
 * Explanation:
 * We are given a list of bricks. Inorder to colour them uniquely and efficiently,
 * we must consider sorting the list by value, as bricks having same values must
 * have different colours.
 * Once, the bricks are coloured, we must check if the there exist any brick
 * which has same value and same colour. If exist then solution is simply NO.
 * On the contrary, if the solution exist have to rearrange the brick_list as
 * the original one. After arranging, we must display all the colour by increasing
 * the value by 1, because we need colours ranging from 1 to number of colours.
*/
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
struct Brick
{
    int position;
    int value;
    int colour;
};
bool byValue(const Brick &first, const Brick &second)
{
    return first.value < second.value;
}
bool byPosition(const Brick &first, const Brick &second)
{
    return first.position < second.position;
}
/**
 * Checks whether such configuration of bricks is possible or not
 * @param Vector of bricks
 * @return Returns true
 */
bool validityCheck(std::vector<Brick> &brick_list, int no_of_colours)
{
    std::vector<Brick> filter_vector;
    for (int this_colour = 0; this_colour < no_of_colours; this_colour++)
    {
        filter_vector.clear();
        for (auto brick : brick_list)
        {
            if (brick.colour == this_colour)
                filter_vector.push_back(brick);
        }
        for (int i = 0; i + i < filter_vector.size(); i++)
            if (filter_vector[i].value == filter_vector[i + 1].value)
            {
                return false;
            }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int no_of_bricks, no_of_colours;
    cin >> no_of_bricks >> no_of_colours;
    std::vector<Brick> brick_list(no_of_bricks);
    for (int i = 0; i < no_of_bricks; i++)
    {
        cin >> brick_list[i].value;
        brick_list[i].position = i;
    }
    std::sort(all(brick_list), byValue);

    for (int i = 0, this_colour = 0; i < no_of_bricks;
         i++, this_colour = (this_colour + 1) % no_of_colours)
    // Colours would be assigned from 0 to (no_of_colours - 1)
    {
        brick_list[i].colour = this_colour;
    }
    if (validityCheck(brick_list, no_of_colours))
    {
        cout << "YES" << endl;
        std::sort(all(brick_list), byPosition);
        for (int i = 0; i < no_of_bricks; i++)
        {
            cout << brick_list[i].colour + 1 << " ";
        }
        cout << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}