// Min Chars to Add for Palindrome (gfg)

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
  string s= "abc";
  string original = s;
  string rev =s;
        reverse(rev.begin(),rev.end());
        int size=s.size();
        s+='$';
        s+=rev;
        
        int n=s.size();
        vector<int>lps(n,0);
        int pre=0, suf=1;
        
        while(suf < s.size()){
            if(s[pre] == s[suf]){
                lps[suf]=pre+1;
                pre++, suf++;
            }
            else{
                if(pre ==0){
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
            
        }
        int len=lps [n-1];
      string addChars = rev.substr(0, original.size() - len);
      cout << addChars << endl; 
      cout << addChars + original<<endl; 
      cout<< size-len;
        

  return 0;
}