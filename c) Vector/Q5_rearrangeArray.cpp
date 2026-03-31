// rearrange array elements by sign (leetcode Q2149)
#include <iostream>
#include <vector>
using namespace std;
 
int main (){
  int arr []={1,2,-4,-5};
  int n =sizeof(arr)/sizeof(int);
  vector<int>ans(n);

  int posIndex =0;
  int negIndex =1;

  for (int i = 0; i <n; i++) {
    if (arr[i] > 0)  {
     ans[posIndex] = arr[i];
     posIndex +=2;
    }
    else{
      ans[negIndex] = arr[i];
      negIndex +=2;
    } 
    
  }
  for (int i = 0; i < n; i++) {
    cout<<ans[i]<<" ";
  }
  
  

  return 0;

}