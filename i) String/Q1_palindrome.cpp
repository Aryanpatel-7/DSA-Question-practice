// valid palindrome (leetcode Q125)
# include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch){
  if((ch >='0' && ch<='9') ||
      (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
      }
      return false;
}

int main (){
string str ="AC3?e3c&a";
int st =0 , end = str.length()-1;


while(st < end){
  if(!isAlphaNum(str[st])){
    st++ ; continue;
  }
  if(!isAlphaNum(str[end])){
    end--; continue;
  }

  if(tolower(str[st]) != tolower(str[end])){
    cout<<"not palindrome";
   return 0;
  } 
  st++; end--;
}
   cout<<"valid palindrome";
  return 0;
}