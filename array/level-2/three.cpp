/*Count pairs with given sum
Difficulty Level : Medium
Last Updated : 06 Jul, 2021
Given an array of integers, and a number ‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum’.

Examples:  

Input  :  arr[] = {1, 5, 7, -1}, 
          sum = 6
Output :  2
Pairs with sum 6 are (1, 5) and (7, -1)

Input  :  arr[] = {1, 5, 7, -1, 5}, 
          sum = 6
Output :  3
Pairs with sum 6 are (1, 5), (7, -1) &
                     (1, 5)   */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int sum;
  cin>>sum; 
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]+a[j]==sum){
        count++;
      }
    }
  }
  cout<<count<<endl;
  return 0;
}
