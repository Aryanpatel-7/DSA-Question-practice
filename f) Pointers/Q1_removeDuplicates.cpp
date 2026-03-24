// remove duplicates in place from sorted array
#include <iostream>
using namespace std;
int main (){
  int arr []={1,1,2,2,3,3};
  int n =sizeof(arr)/sizeof(int);

  int i =0;
  for (int j = 1; j < n; j++)  {
    if (arr[j] != arr[i]) {
      i++;
      arr[i]=arr[j];
    }   
  }
  int k =i+1;
  cout<<"unique count :"<<" " <<k<<endl;
  cout<<"Array after removing duplicates :";
  for (int x = 0; x < k; x++)
  {
    cout<<arr[x];
  }

  return 0;
}