/*Sort an array of 0s, 1s and 2s
Difficulty Level : Medium
Last Updated : 09 Apr, 2021
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
Examples: 
 

Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  map<int,int> mp;

  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    mp[c]++;
  } 
  for(auto i:mp){
    for(int j=0;j<i.second;j++){
      cout<<i.first<<" ";
    }
  }
  return 0;
}
