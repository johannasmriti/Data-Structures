/*Largest Sum Contiguous Subarray
Difficulty Level : Medium
Last Updated : 27 May, 2021
Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. */
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int max_so_far=-1;
  int max_ending_here=0;
  for(int i=0;i<n;i++){
    max_ending_here+=a[i];
    if(max_so_far<max_ending_here){
        max_so_far=max_ending_here;
    }
    if(max_ending_here<0){
        max_ending_here=0;
    }
  }
  cout<<max_so_far<<endl;
  return 0;
}
