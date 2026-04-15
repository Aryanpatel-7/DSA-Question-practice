// largest odd number in a string (leetcode Q1903)

#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main (){
string s ="5347";
int ind =-1;
for(int i =s.length()-1; i>=0; i--){ //last odd val
  if((s[i]-'0')%2==1){
    ind =i;
    break;
  }
}   
if(ind == -1) {
  cout<<"";
  
}

  int i =0;
  while (i < ind && s[i] == '0') {
     i++;
  }
  cout<<"largest odd number is :"<< s.substr(i, ind-i+1);
  

return 0;
}