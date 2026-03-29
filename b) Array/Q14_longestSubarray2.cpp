// length of the longest subarray with zero sum
#include<iostream>
#include<climits>
#include <unordered_map>
using namespace std;

int main (){
  int arr []={9,-3,3,-1,6,-5};
  int n =sizeof(arr)/sizeof(int);

  int maxLen = 0;
 unordered_map<int, int> sumIndexMap;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum == 0) {
      maxLen = i+1;
    } 

    else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
      maxLen = max(maxLen, i-sumIndexMap[sum]);
    } else {
      sumIndexMap[sum] =i;
    }
  } 
  
  cout<<"the length of the longest subarray is :"<<maxLen;
  return 0;
}