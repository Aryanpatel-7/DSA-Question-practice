// find duplicate (leetcode Q128)
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
int arr [] = {3,1,3,4,2};
int n =sizeof(arr)/sizeof(int);

 bool found = false;
 for (int i = 0; i < n; i++) {
  for (int j = i+1; j < n; j++){
    if (arr[i] == arr[j]) {
      cout<<"Duplicate value found : "<<arr[i]<< endl;
      found = true;
    }
  }
 }
 if(!found){
 cout<<"Duplicate value not found";
 } 
  return 0;
}