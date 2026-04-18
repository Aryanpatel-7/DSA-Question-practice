// Roman to Integer (leetcode Q13)

#include<iostream>
#include <unordered_map>
using namespace std ;

int romanTointeger(string s){
  int ans =0;
  unordered_map<char,int> roam ={
    {'I',1}, {'V',5}, {'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };

    for(int i=0; i<s.size()-1; i++){
      if(roam[s[i]] < roam[s[i+1]]){
        ans -= roam[s[i]];
      } else {
        ans += roam[s[i]];
      }
    }
    return ans + roam[s.back()];
}



int main (){
  string s ="MCMXCIV";

  int ans =romanTointeger(s);
  cout<<"Integer value :"<< ans;

  return 0;

}