#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s)
{
    int n = s.size();
    int longestCnt = 1;
    string longestS = s.substr(0, 1);

    for (int i = 0; i < n; i++)
    {
        int left = i;
        for (int j = i + 1; j < n; j++)
        {
            int right = j;
            while (left <= right)
            {
                if (s[left] == s[right])
                {
                    left++;
                    right--;
                }
                else // edge case: early return if not a single char match
                {
                    break;
                }
            }
            if (left > right)
            {
                if (longestCnt < (j - i + 1))
                {
                    longestCnt = j - i + 1;
                    longestS = s.substr(i, longestCnt);
                }
            }
            left = i; // reset left for next j
        }
    }
    return longestS;
}

int main()
{
    string s1 = "babad";
    string s2 = "cbbd";
    string s3 = "aacabdkacaa";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << longestPalindrome(s1) << endl;
    cout << "Input: " << s2 << endl;
    cout << "Output: " << longestPalindrome(s2) << endl;
    cout << "Input: " << s3 << endl;
    cout << "Output: " << longestPalindrome(s3) << endl;
    return 0;
}