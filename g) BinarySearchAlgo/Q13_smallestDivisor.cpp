// find the smallest divisor given a threshold (leetcode Q1283)

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int sumByD(int  nums [], int n, int d){
   int sum =0;
    for(int i=0; i<n; i++){
        sum += ceil((double)nums[i]/d);
    }
    return sum;
}

int smallestDiv(int nums[], int n , int limit){
   if(n > limit) return -1;

    int low = 1, high = *max_element(nums, nums + n);

    while(low <= high){
        int mid = low +(high - low)/2;

        if(sumByD(nums,n , mid) <= limit){
         high = mid-1;
        } else {
          low = mid+1;
        }
    }
   return low;
}

int main (){

int nums []= {1,2,5,9};
  int n = sizeof(nums)/sizeof(int);
  int limit =6;
  
 cout<<"the smallest divisor  is :"<<smallestDiv(nums,n,limit);
  return 0;
}