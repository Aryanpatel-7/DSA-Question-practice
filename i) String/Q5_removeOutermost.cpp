// remove outermost parentheses (leetcode 1021)

#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main (){
string s ="(()())(())";

string result ="";
int level =0;

for(int i =0; i<s.size(); i++){
  if(s[i]=='('){
    if(level > 0) result += s[i];
    level++;
  }
   else if(s[i]==')'){
    level--;
    if(level > 0) result +=s[i];
   }
}
 cout<<"the result is :"<<result;
  return 0;
}