// find square root of a number using binary search
#include <iostream>
using namespace std;

int squareroot( int n) {
  long long st =0,  end =n;
  long long ans =0;

  while (st <= end) {

    long long mid = st+(end-st)/2;

    if(mid*mid == n){
      ans =mid;
      break;
    } else if(mid*mid < n){
    
      st=mid+1;
    } else {
      end =mid-1;
    }
   
  }
  return ans;
  
}

int main (){
  int n =36;

 cout<<"squareroot is : "<<squareroot(n);

  return 0;
}