#include <bits/stdc++.h>
using namespace std;

// 108 Problem: Count Number of Substrings with Exactly K Distinct Characters
// Key Insight: exactly k = atMost(k) - atMost(k-1)

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
// Intuition (Brute): Check all substrings, use map to track distinct chars, count when size = k

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
// TC: O(n²), SC: O(k)

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

// Intuition (Optimal): Use a sliding window to count all substrings ending at each index that contain at most k distinct characters by expanding the right pointer and shrinking from the left when distinct count exceeds k.
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