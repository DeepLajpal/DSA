#include <bits/stdc++.h>
using namespace std;

// Highest Time taken : ~1hr

int main()
{
    string charString;
    cout << "Enter Character String: ";
    cin >> charString;

    // pre-storing
    int hash[256] = {0};
    for (int i = 0; i < charString.size(); i++)
    {
        hash[charString[i]] += 1;
    }

    // fetching
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        char character;
        cout << "Enter character: ";
        cin >> character;
        cout << hash[character] << endl;
    }
    return 0;
}