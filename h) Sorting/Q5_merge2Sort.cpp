// merge 2 sort array (leetcode Q88)
#include <iostream>
using namespace std;

int main (){
  int A[]={1,2,3,0,0,0};
  int m =3;
  int B[]={2,5,6};
  int n =3;

  int index = m+n-1;
  int i =m-1;
  int j = n-1;
 
  while (i >= 0 && j >= 0) {
    if (A[i] >= B[j]){
      A[index] = A[i];
      index--,i--;
    }
    else{
      A[index] = B[j];
      index--, j--; 
    }
  }
  while (j >= 0) {
      A[index] = B[j];
      index--, j--; 
  }
  for (int i = 0; i < m+n; i++) {
    cout<<A[i]<<" ";
  }
  
  
  return 0;
}