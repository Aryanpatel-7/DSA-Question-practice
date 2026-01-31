// claculate sum of number from 1to N.
#include <iostream>
 using namespace std;

 int sumN(int n){
  int sum =0;

  for(int i =1; i<=n; i++){
    sum = sum + i;
  }
  return sum;
 }
 int main (){
  int a;
  cout <<"enter the number :";
  cin>>a;
  cout << sumN(a) <<endl;
  // cout << sumN(5) <<endl;
  return 0;
 }