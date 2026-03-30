// longest subarray with given sum k
#include <iostream>
#include<climits>
using namespace std;
int main (){
  int arr[]={10,5,2,7,1,9};
  int n =sizeof(arr)/sizeof(int);
  int k =15;
  int maxlen = 0;
  for (int i = 0; i < n; i++) {
    int sum =0;

  for (int j = i; j < n; j++) {
    sum +=arr[j];
    if (sum == k)  {
     maxlen =max(maxlen,j-i+1);
    } 
  }
  }
   cout<<"the length of the longest subarray is :"<<maxlen;
  
  return 0;
}