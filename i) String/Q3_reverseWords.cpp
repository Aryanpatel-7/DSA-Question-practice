// Reverse Words in a String (leetcode Q151)

#include <iostream>

#include <vector>
using namespace std;

int main (){
  string s ="the sky is blue" ; 
 vector<string>word;
  string temp ="";

  for (int i = 0; i <s.length(); i++) {
    if(s[i] != ' '){
      temp += s[i];
    } else{
      word.push_back(temp);
      temp="";
    }
  }
  word.push_back(temp);
  for (int i = word.size()-1; i >= 0; i--){
    cout<<word[i];
    if(i != 0)cout<<" ";
  }
  
  

  return 0;
}