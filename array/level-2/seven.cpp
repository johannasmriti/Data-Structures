/*Find the first repeating element in an array of integers
Difficulty Level : Easy
Last Updated : 10 May, 2021
Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest. 

Examples: 

Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 [5 is the first element that repeats]

Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 6 [6 is the first element that repeats]*/
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  map<int,int> m;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
  }
  int flag=0;
  for(int i=0;i<n;i++){
    if(m[a[i]]>1){
      cout<<a[i]<<endl;
      flag=1;
      break;
    }
  }
  if(flag==0){
    cout<<"No repeating elements"<<endl;
  }
  return 0;
}
