#include <iostream>
 using namespace std;
  
 int main(){

  int n , sum=0;
  cout<<"Enter the number :";
  cin >>n;

  while (n > 0)
  {
      int digit =n %10;
      sum = sum + digit;

      n = n/10;
  }
  cout<<"sum if digits ="<<sum;
  


  return 0;
 }