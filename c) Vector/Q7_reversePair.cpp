// reverse pair
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
  int arr []={1,3,2,3,1};
  int n =sizeof(arr)/sizeof(int);
  
  int count =0;
  for (int i = 0; i <n; i++){
    for (int j = i+1; j < n; j++){
      if (arr[i] > 2*arr[j]) {
        count++;
      }
    }
    } 
  cout<<count;
  
  return 0;
}