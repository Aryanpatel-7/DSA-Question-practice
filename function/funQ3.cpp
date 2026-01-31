// calculate N factorial
#include <iostream>
 using namespace std;

 int factorialN(int n){
  int fact = 1;
  for( int i =1; i<=n; i++){
    fact *=i;
  }
  return fact;
 }
 int main (){
  int a;
  cout <<"enter the number :";
  cin>>a;
  cout<< factorialN(a);
 // cout<<factorialN(5);
  return 0;
 }