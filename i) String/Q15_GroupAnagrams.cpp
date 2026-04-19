// Group Anagrams (leetcode Q490)

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main (){
   
  vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
  unordered_map<string, vector<string>> mp;

  for(int i = 0; i < strs.size(); i++){
    string temp = strs[i];
    sort(temp.begin(), temp.end());

    mp[temp].push_back(strs[i]);
  }

  vector<vector<string>> ans;
  for(auto it : mp){
    ans.push_back(it.second);
  }
  
  for(auto group : ans){
    for(auto word : group){
        cout << word << " ";
    }
    cout << endl;
  }
  
  return 0;
}