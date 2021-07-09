/*Find common elements in three sorted arrays
Difficulty Level : Easy
Last Updated : 07 Jul, 2021
Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

Examples: 

Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80

Input: 
ar1[] = {1, 5, 5} 
ar2[] = {3, 4, 5, 5, 10} 
ar3[] = {5, 5, 10, 20} 
Output: 5, 5*/
#include<bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  //int x[a],y[b],z[c];
  map<int,int> m;
  for(int i=0;i<a;i++){
    int f;
    cin>>f;
    m[f]++;
  }
  for(int i=0;i<b;i++){
    int f1;
    cin>>f1;
    m[f1]++;
  }
  for(int i=0;i<c;i++){
    int f2;
    cin>>f2;
    m[f2]++;
  }
  for(auto i:m){
    if(i.second>2){
      cout<<i.first<<" ";
    }
  }
}
