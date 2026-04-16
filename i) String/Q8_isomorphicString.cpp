// isomorphic string (leetcode Q205)

#include<iostream>
using namespace std;

bool isomorphic(string s,string t){
    int m1[256]={0};
  int m2[256]={0};
  int n =s.size();

  for (int i = 0; i < n; i++) {
    if(m1[s[i]] != m2[t[i]]){
       return false;
    }
     m1[s[i]]=i+1;
     m2[t[i]]=i+1;
  }
  return true;
}
int main (){
  string s ="paper", t="title";

   isomorphic(s,t);
  cout<<"string are isomorphic";
  return 0;
  
  cout<<"string are not isomorphic";

  return 0;
}