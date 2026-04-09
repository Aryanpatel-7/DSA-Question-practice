// search in rotated sorted array 2 (leetcode Q81)

#include <iostream>
using namespace std;

 bool RotatedSorted(int arr[],int n,int target){

  int st = 0, end=n-1;
  while(st <= end){

    int mid = st+(end-st)/2;
    if(arr[mid] == target) return true;

    if(arr[st]== arr[mid] && arr[mid]==arr[end]){
     st++;
      end--;
      continue;
    }
    else if(arr[st]<= arr[mid]){  // left rotated

    if(arr[st]<=target && target <=arr[mid]){                    
           end =mid-1;
    } else {
      st =mid+1;
    }
  }
    else{                        //right rotated
      
      if(arr[mid]<= target && target <=arr[end]){
        st =mid+1;
      } else {
        end = mid-1;
      }
    }
  }
  return false;
 }

int main (){

int arr []= {2,5,6,0,0,1,2};
  int n = sizeof(arr)/sizeof(int);
  int target = 0;

  cout<<RotatedSorted(arr,n,target);
  return 0;
}