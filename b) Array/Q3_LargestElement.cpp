//find the largest number in array
#include <iostream>
#include <climits>
 using namespace std;

 int main (){

int nums []={5,45,22,1,-15,28};
int size= 6;

int largest =INT_MIN;

for (int i = 0; i < size; i++) {
 // largest =max(nums[i],largest);
 if (nums[i]>largest)
 {
  largest = nums[i];
 }
 
}
cout<<"largest ="<<largest<<endl;

  return 0;
 }