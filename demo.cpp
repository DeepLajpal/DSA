#include <bits/stdc++.h>
using namespace std;

int atMost(string s, int k)
{
    int left = 0, res = 0;
    int n = s.size();
    unordered_map<char, int> freq;

    for (int right = 0; right < n; right++)
    {
        freq[s[right]]++;

        while (freq.size() > k)
        {                    // run karega jab tak freq.size <= k nahi ho jati
            freq[s[left]]--; // decrease the count until left pointer char freq become zero
            if (freq[s[left]] == 0)
                freq.erase(s[left]);
            left++;
        }

        res += right - left + 1;
    }
    return res;
}

int optimalCountExactlyKDistinctSubstrings(string s, int k)
{
    return atMost(s, k) - atMost(s, k - 1);
}

int main()
{
    string s = "abcbaa";
    int k = 3;
    // Call optimal
    cout << "Optimal (exactly k distinct): " << optimalCountExactlyKDistinctSubstrings(s, k) << endl;
    return 0;
}