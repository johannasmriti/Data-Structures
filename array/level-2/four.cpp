/*Find duplicates in O(n) time and O(1) extra space | Set 1
Difficulty Level : Medium
Last Updated : 28 May, 2021
Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

Example: 

Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
Output: 1, 3, 6

Explanation: The numbers 1 , 3 and 6 appears more
than once in the array.

Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
Output: 3*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    mp[a]++;
  }
  for(auto i:mp){
    if(i.second>1){
      cout<<i.first<<" ";
    }
  }
  //cout<<count/2<<endl;
  return 0;
}
