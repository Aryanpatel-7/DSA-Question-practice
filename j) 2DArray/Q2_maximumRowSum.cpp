// maximum rowSum 

# include <iostream>
#include <climits>
using namespace std;

int maxrowSum(int mat[][3], int row, int col){

  int maxsum = INT_MIN;

  for (int i = 0; i < row; i++) {
    int rowSum =0;
    for (int j = 0; j < col; j++) {
      rowSum += mat[i][j];
      }
     maxsum = max(maxsum,rowSum);
  }  
  return maxsum;
  } 

 int main (){
  int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9}};
  int row =4;
int col =3;
  cout<<maxrowSum(matrix,row,col);

  return 0;
 }