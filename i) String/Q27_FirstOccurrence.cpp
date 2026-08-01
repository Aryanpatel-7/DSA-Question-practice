//  Find the Index of the First Occurrence in a String (leetcode Q28)

#include <iostream>
#include<vector>
using namespace std;

void lpsfind(vector<int>&lps, string s) {

  int pre=0,suff=1;

   while(suff < s.size()){
    if(s[pre] == s[suff]){
        lps[suff]=pre+1;
        pre++,suff++;
    }
    else{
        if(pre ==0){
            lps[suff]=0;
            suff++;
        }
        else{
            pre= lps[pre-1];
        }
    }
  }
}
int main()
{
  string haystack = "sadbutsad";
  string needle = "sad";

   vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
    
    int first=0, second=0;
    while( first<haystack.size() && second<needle.size()){
        if(haystack[first] == needle[second]){
       first++,second++;
        }
        else{
            if(second ==0){
                first++;
            }
            else{
                second =lps[second-1];
            }

        }
    }
    if(second == needle.size())
    cout<< first-second;
    return-1;


  return 0;

}
