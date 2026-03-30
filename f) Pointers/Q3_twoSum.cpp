// two sum check if a pair with given sum exits in array
#include<iostream>
using namespace std;

int main (){
  int arr []={2,6,5,8,11};
  int n =sizeof(arr)/sizeof(int);
  int target = 14;
bool found = false;
for (int i = 0; i < n; i++){
 for (int j = i+1; j < n; j++){
 if (arr[i]+arr[j] == target){
    cout<<"yes";
    found =true;
    break;
    } 
}
 }
 if (!found) cout<<"no";
 
  return 0;
}