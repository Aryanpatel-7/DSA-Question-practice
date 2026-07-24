// Add string (leetcode Q415)

#include <iostream>
 #include<vector>
 #include <algorithm>
 #include <string>
using namespace std;


  string add(string num1, string num2){
      string ans;
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    int sum ,carry=0;

    while(index2 >=0){
        sum =(num1[index1]-'0')+(num2[index2]-'0')+ carry;
        carry = sum/10;
          char c='0'+sum%10;
          ans +=c;
          index2--,index1--;
    }

    while(index1 >=0){
        sum =(num1[index1]-'0')+ carry;
        carry = sum/10;
          char c='0'+sum%10;
          ans +=c;
          index1--;
    }
    if(carry)
    ans+='1';
    reverse(ans.begin(),ans.end());

     return ans;
  }
int main (){
  string num1 = "26583", num2 = "698";

   if(num1.size() < num2.size()){

        cout<< add(num2,num1);
   }
        else{
       cout<< add(num1,num2);
        }
  
  return 0;
}