// maximum subArray sum using brute force algo
# include <iostream>
#include <climits>
using namespace std;

int main (){
   int n =7;
 int arr []={3,-4,5,4,-1,7,-8};


 int maxSum =INT_MIN;

 for (int st = 0; st <n; st++) {
   int Currsum=0;
  for (int end = st; end <n; end++) {
      Currsum +=arr[end];
      maxSum = max(Currsum,maxSum);
  }
  
 }
 cout<<"sum ="<<maxSum<<endl;

  return 0;
}