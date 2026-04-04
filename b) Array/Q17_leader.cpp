// find leaders in an array
#include<iostream>
using namespace std;

int main (){
  int arr []={4,7,1,0};
  int n =sizeof(arr)/sizeof(int);

  for (int i = 0; i < n; i++) {
    bool leader = true;

    for (int j = i+1; j < n; j++) {
      if (arr[j] > arr[i])  {
       leader =false;
       break;
      }
    }
    if (leader) {
      cout<<arr[i]<<" ";
      
    }
  }
  return 0;
}