/*Find the frequency of a number in an array
Difficulty Level : Easy
Last Updated : 14 May, 2021
Given an array, a[], and an element x, find a number of occurrences of x in a[].
Examples: 
 

Input  : a[] = {0, 5, 5, 5, 4}
           x = 5
Output : 3

Input  : a[] = {1, 2, 3}
          x = 4
Output : 0*/
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
  int x;
  cin>>x;
  for(auto i:mp){
    if(x==i.first){
      cout<<"The frequency of the element is "<<i.second;
      break;
    }
  }
  return 0;
}
