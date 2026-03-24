// check if array is sorted and rotated 

#include <iostream>
#include <climits>
using namespace std;

int main (){
  int arr [] ={3,4,5,1,2};
  int n = sizeof(arr)/sizeof(int);

  int breakCount = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[(i+1) % n] ){
      breakCount++;
    }
  }
  if (breakCount <= 1) {
    cout<<"true";
  }
   else {
    cout<<" false";
   }
  return 0;
}