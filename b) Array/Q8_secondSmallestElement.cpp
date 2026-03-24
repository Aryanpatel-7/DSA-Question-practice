// find second smallest element in an array
#include <iostream>
#include <climits>
using namespace std;

int main (){
  int arr [] ={1,2,4,7,7,5};
  int n =sizeof(arr)/sizeof(int);
  
  int smallest =INT_MAX;
  int second_smallest =INT_MAX;

  for (int i = 0; i < n; i++) {
    if (arr[i] < smallest) {
      second_smallest = smallest;
      smallest =arr[i];
    }
    else if (arr[i] < second_smallest && arr[i] != smallest)
    {
       second_smallest = arr[i];
       cout<<"second smallest is"<<" "<<second_smallest<<endl;
    }
  }
  return 0;
}