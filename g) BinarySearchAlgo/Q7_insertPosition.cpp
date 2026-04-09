// search insert position (leetcode Q35)
# include <iostream>
using namespace std;

int SearchInsert(int arr[], int n, int target){
   int st=0, end =n-1;
   int ans =-1;

  while(st < end){
    int mid = st+(end-st)/2;
    
   if (arr[mid]>= target){
       ans =mid;
       end =mid-1; 
  } else{
    st = mid+1;
  }
}
return ans;
}

int main (){
  int arr []={1,3,5,6};
  int n = sizeof(arr)/sizeof(int);
  int target =2;

 int index =SearchInsert(arr,n,target);
 cout<<"index : "<<index;
  
  return 0;
}