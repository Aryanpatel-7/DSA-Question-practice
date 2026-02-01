// Reverse an Array
# include <iostream>

using namespace std;

void ReverseArray (int arr[], int sz) {
  int start = 0;
  int end = sz-1;

  while (start < end) {
    swap(arr[start],arr[end]);
     start ++;
     end --;
  }
  


}

int main (){
  int arr []={3,4,5,6,7,8,9};
  int sz =7;
   
  ReverseArray(arr,sz);

  for (int i = 0; i < sz; i++)  {
  cout<<arr[i]<< " ";
  }
  cout<<endl;
  return 0;
}