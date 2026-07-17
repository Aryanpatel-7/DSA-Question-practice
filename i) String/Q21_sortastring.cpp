// sort a string (greekForgreek)

#include <iostream>
 #include<vector>
using namespace std;
int main (){
  string s = "aedcabd";

    vector<int>alpha(26,0);
        
        for(int i=0; i<s.size(); i++){
            alpha[s[i]-'a']++;
        }
        string ans;
        
        for(int i=0; i<26; i++){
            char c ='a'+i;
            while(alpha[i]){
                ans+=c;
                alpha[i]--;
            }
        }
  cout<<ans;
  return 0;
}