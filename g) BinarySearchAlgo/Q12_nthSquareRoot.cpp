// find Nth square root of a number using binary search

#include <iostream>
using namespace std;

int squareroot( int n, int m) {
  long long st =0,  end =n;
 

  while (st <= end) {

    long long mid = st+(end-st)/2;

     long long ans = 1;
     for (int i = 0; i < n; i++) {
       ans *= mid;
       if(ans > m) 
       break;
     }
     if(ans == m) return mid;

     if(ans < m) st =mid+1;

     else end =mid-1;
}
  return -1;
}
int main (){
  int n =3, m=27;

 cout<<"Nth squareroot is : "<<squareroot(n,m);

  return 0;
}