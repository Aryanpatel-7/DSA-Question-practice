// Maximum Nesting Depth of Two Valid Parentheses Strings (leetcode Q1111)

#include <iostream>
#include <vector>
using namespace std;

vector<int> maxDepth(string s)
{
  int n = s.size();
  vector<int> ans(n);
  int depth = 0;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(')
    {
      depth++;
      ans[i] = depth % 2;
    }
    else
    {
      ans[i] = depth % 2;
      depth--;
    }
  }
  return ans;
}

int main()
{
  string seq = "(()())";
  vector<int> res = maxDepth(seq);
  for(int i = 0; i < res.size(); i++)
  {
     cout << res[i] << " ";  
    }
    cout << endl;

  return 0;
}