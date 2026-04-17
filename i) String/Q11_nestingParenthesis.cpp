// Maximum Nesting Depth of the Parentheses (leetcode Q1614)

#include<iostream>
using namespace std;

int main (){

  string s = "(1+(2*3)+((8)/4))+1";
  int currDepth = 0;
  int maxDepth = 0;

  for(int i=0; i<s.length(); i++){
    if(s[i] == '('){
      currDepth++;
    } 
    else if (s[i] == ')') {
       currDepth--;
    }
    maxDepth = max(maxDepth,currDepth);
  }
  cout<<"maxDepth is:"<<maxDepth;
  return 0;
}