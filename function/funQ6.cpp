

#include <iostream>
 using namespace std;

 int fibonacci(int n){
  int a=0, b=1, c;

  if (n == 0)
  return 0;
  if (n==1)
  return 1;

  for (int i =2; i <=n; i++) {
      c = a+b;
      a=b;
      b=c;
  }
  return b;
 }

 int main(){
  int n;
  cout<<"enter n:";
  cin>>n;

  cout<<"Nth fibonacci number = "<<fibonacci(n);

  return 0;
 }