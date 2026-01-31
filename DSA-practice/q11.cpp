// check whether one string is a rotation of another

#include <iostream>
#include <string>
using namespace std;

// METHOD 1
bool stringRotation(string &s, string &goal)
{
    if (s.size() != goal.size())
        return false;

    // try all possible rotations of 's'
    for (int i = 0; i < s.size(); i++)
    {
        //s.string(startIndex, length)
        string rotated = s.substr(i) + s.substr(0, i);
        if (rotated == goal)
        {
            return true;
        }
    }
    return false;
}

// METHOD 2
bool StringRotation(string s, string goal)
{
    if (s.size() != goal.size())
        return false;

    // conctenate s with itself and check if goal exists in it
    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
    //If goal exists inside doubledS → rotation exists → true. and  If not → false
}

int main()
{
    string s = "rotation";
    string goal = "tionrota";

    cout << (stringRotation(s, goal) ? "true" : "false") << endl;

    cout << (StringRotation(s, goal) ? "true" : "false") << endl;

    return 0;
}