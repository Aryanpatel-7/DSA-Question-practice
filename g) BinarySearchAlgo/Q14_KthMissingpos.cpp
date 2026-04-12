//  Kth Missing Positive Number (leetcode 1539)
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int missingpos(int nums[],int n,int k){
  int st =0 ,  end =n-1;
  while(st <= end){
    int mid = st +(end-st)/2;
    int missingval = nums[mid] -(mid+1);

        if(missingval < k){
             st = mid+1;
        } else {
            end = mid-1;
        }
    }

      return k + end +1;
  }



int main (){

int nums []= {2,3,4,7,11};
  int n = sizeof(nums)/sizeof(int);
  int k =5;
  
 cout<<"Kth missing position  is :"<<missingpos(nums,n,k);
  return 0;
}