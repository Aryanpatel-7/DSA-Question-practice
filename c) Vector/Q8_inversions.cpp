//Count inversions in an array
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
  int arr []= {5,3,2,1,4};
  int n =sizeof(arr)/sizeof(int);

  int count =0;
  for (int i = 0; i < n; i++)  {
    for (int j = i+1; j< n; j++) {
      if(arr[j]< arr[i]){
        count++;
      }
    } 
  }
  cout<<"The number of inversions is: "<<count;

  return 0;
}