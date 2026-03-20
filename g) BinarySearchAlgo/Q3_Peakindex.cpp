// peak index in mountain Array (leetcode Q852)
#include <iostream>
using namespace std;

int PeakIndex(int arr[],int size){
  int st =1, end =size-2;

  while (st <= end) {
    int mid = st +(end-st)/2;

    if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
    return mid;
    }
    else if(arr[mid-1] < arr[mid]){
      st = mid+1;
    } else{
      end = mid-1;
    } 
  }
  return -1;
}
int main (){
  int arr[]={0,3,8,9,5,2};
  int size = sizeof(arr) / sizeof(int);

   cout << PeakIndex(arr,size);
  return 0;
}