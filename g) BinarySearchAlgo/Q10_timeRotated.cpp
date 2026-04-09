// find out how many times the array has been rotated

#include <iostream>
using namespace std;

int findRotated(int arr[], int n) {

   int st =0 , end =n-1;

   while (st < end) {
    int mid = st+(end-st)/2;
    if(arr[mid] >arr[end]){
      st=mid+1;
    } else {
      end =mid;
    }
    
   }
   return st;
   
}
int main (){

int arr []= {4,5,6,7,0,1,2,3};
  int n = sizeof(arr)/sizeof(int);
  

  cout<<"times the array rotated :"<<findRotated(arr,n);
  return 0;
}