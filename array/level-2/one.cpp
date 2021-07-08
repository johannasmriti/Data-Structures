/*Program to cyclically rotate an array by one
Difficulty Level : Basic
Last Updated : 06 Jun, 2021
Given an array, cyclically rotate the array clockwise by one. 

Examples:  

Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  int x= a[n-1];
  for(int i=n-1;i>0;i--){
    a[i]=a[i-1];
  }
  a[0]=x;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
