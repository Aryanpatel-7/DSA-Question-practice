#include <iostream>
#include <cmath>
using namespace std;

int main (){
  int num , sum =0;
  cout<<"enter a number :";
  cin>>num;

  int digit = to_string(num).length();
  int original = num;

  while (num > 0) {
    int rem = num % 10;
  sum += (int)(pow(rem, digit) + 0.5);  
    num = num/10;
  }

  if (sum == original){
    cout<<"number is an Armstrong";
  } else{
    cout<<"number is not an Armstrong";
  }

  return 0;
}