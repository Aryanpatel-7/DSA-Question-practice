// painter's partition problem
# include <iostream>
#include <climits>
# include <vector>
using namespace std;

int isPossible(vector<int> &arr, int n,int m, int MaxAllowedTime){
     int painter =1 ,time =0;
     for (int i = 0; i < n; i++){
      if (time+arr[i]<= MaxAllowedTime) {
         time += arr[i];
      }else{
          painter ++;
          time = arr[i];
      }
      
     }
    return painter <=m;
     
}

int  minTimeToPaint(vector<int> &arr, int n, int m){
   int Sum =0 , MaxVal =INT_MIN;
   for (int i = 0; i < n; i++)
   {
    Sum +=arr[i];
    MaxVal = max(MaxVal, arr[i]);
   }

   int st = MaxVal, end = Sum, ans= -1;
   while (st <= end) {
    int mid = st+(end-st)/2;

    if (isPossible(arr ,n ,m, mid)) { // left
      ans =mid;
      end= mid-1; 
    }else{ //right
      st= mid+1;
    }
    
   }
   return ans;
   
}

int main (){
  vector<int> arr ={40, 30, 10, 20};
  int n =4, m=2;

  cout<< minTimeToPaint(arr, n, m)<<endl;        
  return 0;
}