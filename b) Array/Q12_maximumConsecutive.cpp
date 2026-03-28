// count maximum consecutive one's in the array (leetcode Q485)

#include <iostream>
#include <climits>
using namespace std;

int main (){
  int arr[]={1,1,0,1,1,1};
  int n =sizeof(arr)/sizeof(int);

  int maxCount =INT_MIN;
 int Count =0;
 for (int i = 0; i < n; i++) {
   if (arr[i]==0) {
   Count = 0;
   }
   else{
    Count++;
    maxCount =max(maxCount,Count);
   }
  }
   cout<<"maximum consecutive is:"<<" "<<maxCount;
 
 

  return 0;
}