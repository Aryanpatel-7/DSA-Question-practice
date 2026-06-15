// Find the row with maximum number of 1's

# include <iostream>
#include <algorithm>
 using namespace std;

 int rowWithMax1s(int mat[][3],int n,int m){

  int maxOnes =0;
  int ans = -1;
  for(int i=0; i<n; i++){
    int count =0;
    for(int j=0; j<m; j++){
      if(mat[i][j] == 1){
      count++;
      }
      if(count > maxOnes){
        maxOnes = count;
        ans = i;
      }

    }
  }
  return ans;
 }

 int main () {
    int matrix[3][3] = {
        {1, 0, 1}, {1, 1, 1}, {0, 0, 0},
    };
  int n = 3, m = 3;
  cout<<rowWithMax1s(matrix, n, m);
  
    return 0;
  }