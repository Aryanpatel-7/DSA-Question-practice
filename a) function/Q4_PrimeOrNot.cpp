// check number is prime or not 

#include <iostream>
 using namespace std;

 bool isPrime(int n){
  if (n<=1)
  return false;

  for (int i= 2;i<n; i++) {
     if (n % i == 0) 
     return false;
}
    return true;
}

 int main (){
  int num;
  cout<<"enter number :";
  cin>>num;
  if (isPrime(num))
  cout<<"prime number";
  else
  cout<<"not a prime ";
 

  return 0;
 }