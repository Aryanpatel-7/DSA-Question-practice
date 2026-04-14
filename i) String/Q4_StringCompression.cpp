// String Compression (leetcode Q443)

#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main (){
   vector<char> chars = {'a','a','b','b','c','c','c'};

   int n =chars.size();
  int idx = 0;

  for(int i =0; i<n; i++) {
    char ch = chars[i];
    int count =0;

    while(i < n && chars[i] == ch){
      count++;
       i++;
    }

    if(count == 1){
      chars[idx++] = ch;
    } else {
       chars[idx++] = ch;
      string str = to_string(count);
      for(char dig : str){
        chars[idx++] = dig;
      }
  }
        i--;
  }
  chars.resize(idx);
  cout << "Compressed length: " << idx << endl;

  cout << "Compressed array: ";
    for (char c : chars) {
        cout << c;
    }
  return 0;
}