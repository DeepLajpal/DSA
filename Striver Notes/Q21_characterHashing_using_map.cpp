#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string charString;
    cout << "Enter String Character: ";
    cin >> charString;

    // pre-storing
    map<char, int> mpp;
    for (int i = 0; i < charString.length(); i++)
    {
        mpp[charString[i]] += 1;
    }

    // fetching
    int q;
    cout << "Enter number of queries you want: ";
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        char character;
        cout << "Enter Character to check for frequency: ";
        cin >> character;
        cout << mpp[character] << endl;
    }
    return 0;
}