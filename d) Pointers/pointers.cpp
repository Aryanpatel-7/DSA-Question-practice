# include <iostream>
using namespace std;

int changeA(int &b){
b =50;
}


int main (){
int a =10;
changeA(a);

cout<<a<<endl;
  return 0;
}