/*Rearrange array in alternating positive & negative items with O(1) extra space | Set 1
Difficulty Level : Hard
Last Updated : 29 May, 2021
Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa maintaining the order of appearance. 
Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.

Examples : 

Input:  arr[] = {1, 2, 3, -4, -1, 4}
Output: arr[] = {-4, 1, -1, 2, 3, 4}

Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}*/

#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int j=0,x;
  for(int i=0;i<n;i++){
    if(a[i]<0){
      x=a[i];
      for(int k=i;k>=j;k--){
        a[k]=a[k-1];
      }
      a[j]=x;
      j+=2;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
