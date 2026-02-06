// find single number
# include <iostream>
using namespace std;

int main (){
int size =7;
  int nums []={4,12,3,4,5,12,3};
  int ans =0;

  for (int i = 0; i <size; i++)  {
     ans ^=nums[i];
  }
  cout<<ans<<endl;
  return 0;
}