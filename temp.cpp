#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    if (s.length() != goal.length())
    {
        return false;
    }
    sort(s.begin(), s.end());
    sort(goal.begin(), goal.end());

    for (auto i : s)
    {
        cout << "s" << i;
    }
    for (auto i : goal)
    {
        cout << "goal" << i;
    }

    if (s == goal)
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "abcde";
    string goal = "cdeab";
    bool result = rotateString(s, goal);
    cout << "Result: " << result << endl;
    return 0;
}