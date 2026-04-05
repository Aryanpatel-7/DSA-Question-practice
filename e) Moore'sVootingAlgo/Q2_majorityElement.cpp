
// majority element (n/3) (leetcode Q229)
# include <iostream>
#include <algorithm>

using namespace std;

int main (){
  int nums[]={1,2,1,1,3,2};
  int n =sizeof(nums)/sizeof(int);
  sort(nums,nums+n);
  

  int count =1;
  for(int i=1; i<n; i++){
    if(nums[i]==nums[i-1]){
      count++;
    } else{
     if(count > n/3){
      cout<<nums[i-1]<<" ";
    }
    count =1;
  }
  }
  if(count > n/3){
    cout<<nums[n-1];
  }

  return 0;
}