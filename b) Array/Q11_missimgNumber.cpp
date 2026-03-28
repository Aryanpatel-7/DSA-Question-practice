// find the missing number
#include <iostream>
using namespace std;
int main (){
  int nums[]={8,2,4,5,3,7,1};
  int n =sizeof(nums)/sizeof(int);

  int expectedSum =(n+1)*(n+2)/2;
  int ActualSum = 0;
  for (int i = 0; i < n; i++) {
    ActualSum += nums[i];
  }
  int missingNumber = expectedSum - ActualSum;
  cout<<"missing number is :"<<" "<<missingNumber;
  

  return 0;
}