// Sum of Beauty of All Substrings (leetcode Q1781)

#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;

int main (){
string s ="aabcb";
 int n =s.length();
    int sum =0;

    for(int i=0; i<n; i++){
        unordered_map<char,int>freq;

        for(int j=i; j<n; j++){
            freq[s[j]]++;

             int minFreq = INT_MAX;
             int maxFreq = INT_MIN;

            for(auto it : freq){
                minFreq = min(minFreq, it.second);
                maxFreq = max(maxFreq, it.second);
            }
             sum += (maxFreq-minFreq);
        }
    }
        cout<<"sum of all substring is :"<<sum;

  return 0;
}