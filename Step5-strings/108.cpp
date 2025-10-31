#include <bits/stdc++.h>
using namespace std;

// Pseudocode for brute force:
// for i from 0 to n-1:
//     create empty frequency map
//     for j from i to n-1:
//         add s[j] to frequency map
//         if frequency map size == k:
//             increment count
//         if frequency map size > k:
//             break
// return count
// Brute force: For every possible substring, count if it has exactly k distinct characters.

int bruteCountExactlyKDistinctSubstrings(string &s, int k)
{
    int n = s.size();
    int substringCount = 0;

    // Iterate over all possible starting indices
    for (int i = 0; i < n; i++)
    {
        // Frequency map for current substring
        unordered_map<char, int> charFrequencyMap;

        // Iterate over all possible ending indices
        for (int j = i; j < n; j++)
        {
            // Add current character to frequency map
            charFrequencyMap[s[j]]++;

            // If we have exactly k distinct characters, count this substring
            if (charFrequencyMap.size() == k)
            {
                substringCount = substringCount + 1;
            }
            // If more than k distinct characters, break out of loop
            if (charFrequencyMap.size() > k)
            {
                break;
            }
        }
    }
    // Return total count of valid substrings
    return substringCount;
}

// Pseudocode for optimal:
// left = 0, result = 0
// create empty frequency map
// for right from 0 to n-1:
//     add s[right] to frequency map
//     while frequency map size > k:
//         remove s[left] from frequency map
//         left++
//     result += (right - left + 1)
// return result
// Optimal: Use a sliding window to efficiently count substrings with at most k distinct characters.
int optimalCountAtMostKDistinctSubstrings(string s, int k)
{
    // Left pointer and result
    int left = 0, res = 0;
    // Frequency map
    unordered_map<char, int> freq;

    // Iterate through string with right pointer
    for (int right = 0; right < s.size(); right++)
    {
        // Add current character
        freq[s[right]]++;

        // Shrink window if distinct characters exceed k
        while (freq.size() > k)
        {
            freq[s[left]]--;
            if (freq[s[left]] == 0)
                freq.erase(s[left]);
            left++;
        }

        // Count substrings in current window
        res += (right - left + 1);
    }
    return res;
}

// Function to count substrings with exactly k distinct characters
int optimalCountExactlyKDistinctSubstrings(string s, int k)
{
    // Exactly k = atMost(k) - atMost(k-1)
    return optimalCountAtMostKDistinctSubstrings(s, k) - optimalCountAtMostKDistinctSubstrings(s, k - 1);
}
int main()
{
    string s = "abcbaa";
    int k = 3;
    // Call brute force
    cout << "Brute force (exactly k distinct): " << bruteCountExactlyKDistinctSubstrings(s, k) << endl;
    // Call optimal
    cout << "Optimal (exactly k distinct): " << optimalCountExactlyKDistinctSubstrings(s, k) << endl;
    return 0;
}