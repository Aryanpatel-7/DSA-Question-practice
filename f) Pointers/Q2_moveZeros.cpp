// move all zero to the end of the array (leetcode 283)
#include <iostream>
using namespace std;
int main (){
  int nums[]={1,0,2,3,0,4,0,1};
  int n =sizeof(nums)/sizeof(int);

  int j =0;
  for (int i = 0; i < n; i++) {
    if (nums[i] != 0)  {
      swap(nums[i],nums[j]);
      j++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout<< nums[i]<<" ";
  }
  

  

  return 0;
}