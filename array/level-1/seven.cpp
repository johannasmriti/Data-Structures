/*Sort an array of 0s, 1s and 2s
Difficulty Level : Medium
Last Updated : 09 Apr, 2021
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
Examples: 
 

Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
maps
2--3
1--4   a--b
1.2--a
9--5
sorts the elements
space comp=O(1)
all the ele - put it in the map

0-3
1-2
2-2*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
 //defining the map
 //element-frequency
  map<int,int> mp;
//1,0,2,1,0,2
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
   //0--2
   //1--2
   //2--2
    mp[c]++;
   
  } //index i=0
  for(auto i:mp){
    for(int j=0;j<i.second;j++){
      cout<<i.first<<" ";
    }
  }
  return 0;
}
