// check if two string are anagrams (leetcode Q242)

#include<iostream>
#include<algorithm>
using namespace std;

int main (){
 string s = "anagram";
 string t = "nagaram";

 if(s.length() != t.length()) {
  cout<<"false";
  return 0;
 }
 sort(s.begin(),s.end());
 sort(t.begin(),t.end());

 for(int i=0; i<s.length(); i++){
  if(s[i] != t[i]){
    cout<<"string are not anagrams";
    return 0;
  }
 }
 cout<<"string are anagrams";
  return 0;
}