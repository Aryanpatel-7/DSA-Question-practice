//Find First and Last Position of Element in Sorted Array
# include <iostream>
using namespace std;

int FirstBound(int arr[], int n, int target, bool isfound){
  int st =0 , end=n-1;
  int ans =-1;

  while (st <= end){
    int  mid = st+(end-st)/2;

    if(arr[mid]==target){
      ans =mid;
      if(isfound){
        end =mid-1;
      } else{
        st = mid+1;
      }
    } else if(arr[mid] < target){
       st=mid+1;
    } else {
      end =mid-1;
    }
  }
  return ans;
}
int main (){
  int arr []={5,7,7,8,8,10};
  int n = sizeof(arr)/sizeof(int);
  int target =8;

  int first =FirstBound(arr,n,target,true);
 int last =FirstBound(arr,n,target,false);

  cout << "First: " << first << endl;
  cout << "Last: " << last << endl;
 
  return 0;
}