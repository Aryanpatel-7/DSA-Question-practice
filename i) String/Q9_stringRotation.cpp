// check if string is rotation of another (leetcode Q796)
#include<iostream>
using namespace std;

int main (){
  string s ="rotation";
  string goal ="tionrota";

  if(s.length() != goal.length()){
    cout<<"false";
   return 0;
  }

  for (int  i = 0; i < s.length(); i++) {
    string rotate = s.substr(i) +s.substr(0,i);

    if(rotate == goal){
      cout<<"true";
     return 0;
    }
  }
   cout<<"false";
  return 0;
}