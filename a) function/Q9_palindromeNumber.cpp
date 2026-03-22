// check if a number is palindrome or not 
#include <iostream>
 using namespace std;

 int main (){
  int num , rev =0;
  cout<<"enter a number :";
  cin>>num;

  int original = num;

  while (num > 0){
    int rem = num %10;
    rev = (rev *10)+rem;
    num = num/10;
  }
  if (original == rev) {
    cout<<"palindrome number ";
  } else{
    cout<<" not palindrome number :";
  }
  
  return 0;
 }