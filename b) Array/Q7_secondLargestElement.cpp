// find second largest element in an array
#include <iostream>
#include <climits>
using namespace std;

int main (){
  int arr [] ={1,2,4,7,7,5};
  int n =sizeof(arr)/sizeof(int);
  
  int largest =INT_MIN;
  int second_largest =INT_MIN;

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      second_largest =largest;
      largest = arr[i];
    }
   else if( arr[i] >second_largest && arr[i] != largest){
      second_largest = arr[i];
      cout<<"second largest is"<<" "<<second_largest<<endl;
    
   }
  
  }
   return 0;
 
}