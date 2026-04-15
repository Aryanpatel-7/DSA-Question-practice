// longest common prefix (leetcode Q)

#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

string longestPrefix(vector<string>& str, int n){
  if(str.empty())return "";

  sort(str.begin(),str.end());
  string s1 =str[0];
   string s2 =str[n-1];
   string ans="";

   for(int i=0; i<n; i++){
    if(s1[i] != s2[i]){
      break;
    }
     ans +=s1[i];
   }
 return ans;

}


int main (){
vector<string> s = {"flower","flow","flight"};
int n =s.size();
 cout<<"longest common prefix : "<<longestPrefix(s,n);



return 0;
}