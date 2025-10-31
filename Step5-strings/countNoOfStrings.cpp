#include <bits/stdc++.h>
using namespace std;

int countSubstring(string &s, int k)
{
    int n = s.size();
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mpp; // for storing k distinct chars

        for (int j = i; j < n; j++)
        {
            mpp[s[j]]++;

            if (mpp.size() == k)
            {
                counter++;
            }
            else if (mpp.size() > k)
            {
                break; // No point continuing, we exceeded k
            }
        }
    }
    return counter;
}

int main()
{
    string s = "pqpqs";
    int k = 2;
    cout << countSubstring(s, k);
    return 0;
}