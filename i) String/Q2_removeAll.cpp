// Remove All Occurrences of a Substring (leetcode 1910)

#include <iostream>
using namespace std;

int main (){
  string s ="daabcbaabcbc" , part ="abc";

  while (s.length() > 0 && s.find(part) < s.length()) {
    s.erase(s.find(part), part.length());
    
  }
  cout<<s;


  return 0;
}