// 3 sum (leetcode Q15)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
  int arr []={-1,0,1,2,-1,-4};
  int n =sizeof(arr)/sizeof(int);

  vector<vector<int>>ans;
  sort(arr,arr+n); 

  for (int i = 0; i < n; i++){
    if(i >0 && arr[i]==arr[i-1])continue;

    int j=i+1;
    int k=n-1;

    while (j < k)  {
     int sum = arr[i]+arr[j]+arr[k];

     if(sum < 0){
      j++;
     } else if(sum >0){
      k--;
     } else{
      cout << "[ " << arr[i] << " " << arr[j] << " " << arr[k] << " ]\n";
      j++,k--;
      while (j < k && arr[j]==arr[j-1]) j++;
     }
    }
  }
  


  return 0;
}