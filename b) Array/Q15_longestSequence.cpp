// longest consecutive sequence (leetcode Q128)
#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main (){
  int arr []={100,4,200,1,3,2};
  int n =sizeof(arr)/sizeof(int);
  if(n == 0) return 0;
   sort(arr, arr + n);

 int lastsmaller =INT_MIN;
 int count =0;
 int longestSequence =1;
 for (int i = 0; i < n; i++){
  if (arr[i]== lastsmaller + 1){
    count ++;
    lastsmaller =arr[i];
  }
  else if(arr[i] != lastsmaller){
    count =1;
    lastsmaller =arr[i];
  }
  longestSequence =max(longestSequence,count);
  
 }
 cout<<" longest consective sequence is "<<longestSequence<<"\n";
 

  return 0;
}