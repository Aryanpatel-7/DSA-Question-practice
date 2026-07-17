// check pangram (leetcode Q1832)

 #include <iostream>
 #include<vector>
using namespace std;

int main (){

  string sentence = "thequickbrownfoxjumpsoverthelazydog";

  vector<bool>alpha(26,0);

  for (int i = 0; i <sentence.size(); i++) {
   // alpha[sentence[i]-'a']=1;
   int index = sentence[i]-'a';

   alpha[index]=1;
  }

  for (int i = 0; i < 26; i++)
  {
    if(alpha[i]== 0){
      cout<<"false";
    }
  }
  
  cout<<"true";

  return 0;
}