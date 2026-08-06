// circular string matching

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> buildlps(string pattern){
   int m = pattern.size();

    vector<int> lps(m, 0);
   int pre=0, suf=1;

   while(suf < m){
    if(pattern[pre] == pattern[suf]){
      lps[suf]=pre+1;
      pre++,suf++;
    }
    else{
      if(pre==0){
        suf++;
      }
      else{
        pre = lps[pre-1];
      }
    }
   }
   return lps;

}


bool KMPsearch(string text, string pattern){
  vector<int>lps = buildlps(pattern);

  int i=0;
  int j=0;
while(i <text.size()){
  if(text[i]==pattern[j]){
    i++,j++;

    if(j==pattern.size()){
      return true;
    }

  }
  else{
    if(j==0){
      i++;
    }
    else{
      j= lps[j-1];
    }
  }
}

  return false;
}

bool circularMatch(string text, string pattern){
  if(text.size() != pattern.size()){
   return false;
  }
  string doubble = text + text;
  return KMPsearch(doubble,pattern);

}

int main()
{
  string text = "abcd";
  string pattern = "cdab";

  if(circularMatch(text,pattern)){
    cout<<"circular pattern match";
  } else{
    cout<<"circular pattern not match";
  }


  return 0;
}