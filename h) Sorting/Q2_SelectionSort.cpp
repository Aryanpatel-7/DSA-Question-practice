// selection sort
#include<iostream>
using namespace std; 

void selectionSort(int arr[], int n){

  for(int i=0; i<n-1;i++){ //outer loop
   int smallestIdx =i;
   for(int j=i+1; j<n;j++){ //inner loop
    if (arr[j]< arr[smallestIdx])  {
     smallestIdx =j;
    }
   }
   swap(arr[i],arr[smallestIdx]);
  }
}
void printArray(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
int main (){
  int arr []= {8,4,1,5,2,6,3,7};
  int n = sizeof(arr)/sizeof(int);

  selectionSort(arr,n);
 printArray(arr,n);
  return 0;
}