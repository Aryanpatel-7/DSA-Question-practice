// 4sum problem
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
  int arr []={1,0,-1,0,-2,2};
  int n =sizeof(arr)/sizeof(int);
  int tar =0;
  sort(arr,arr+n);
  for (int i = 0; i < n; i++){
    if(i>0 && arr[i]==arr[i-1])continue;

    for (int j = i+1; i < n; ) {
     int p=j+1;
     int q=n-1;

     while(p < q){
      long long sum =(long long)arr[i] + (long long)arr[j] + (long long)arr[p] + (long long)arr[q];
     
      if(sum < tar){
        p++;
      } else if(sum > tar){
        q--;
      } else {
        cout<<"[" << arr[i] <<" "<<arr[j]<<" "<<arr[p]<<" "<<arr[q] << "]\n";
        p++; q--;

        while(p<q &&arr[p]==arr[p-1])p++;
      }
    }
    j++;
    while(j <n && arr[j]==arr[j-1])j++;
    } 
  }
  

  return 0;
}