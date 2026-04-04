// find subarray sum equals k (leetcode Q560)
#include<iostream>
using namespace std;

int main (){
  int arr []={3,1,2,4};
  int n =sizeof(arr)/sizeof(int);
  int k =6;
 
   int count = 0;
 
   for (int i = 0; i < n; i++){
    int sum =0;
   for (int j = i; j < n; j++) {
     sum += arr[j];
    if (sum == k) {
      count++;
    }
    }
   }
   cout<<count;

  return 0;
}