// find minimum in rotated sorted array (leetcode 153)

#include <iostream>
using namespace std;


int findminval(int arr[], int n) {

   int st =0 , end =n-1;

   while (st < end) {
    int mid = st+(end-st)/2;
    if(arr[mid] >arr[end]){
      st=mid+1;
    } else {
      end =mid;
    }
    
   }
   return st[arr];
   
}
int main (){

int arr []= {4,5,6,7,1,2,3};
  int n = sizeof(arr)/sizeof(int);
  

  cout<<"minival :"<<findminval(arr,n);
  return 0;
}