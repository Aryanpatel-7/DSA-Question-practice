//  Longest Substring Without Repeating Characters (leetcode Q3)
#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s)
{
  unordered_map<char, int> mp;
  int left = 0, maxLength = 0;

  for (int right = 0; right < s.length(); right++)
  {
    if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left)
    {
      left = mp[s[right]] + 1;
    }

    mp[s[right]] = right;
    maxLength = max(maxLength, right - left + 1);
  }

  return maxLength;
}

int main()
{
  string s = "abba";
  cout << lengthOfLongestSubstring(s);

  return 0;
}