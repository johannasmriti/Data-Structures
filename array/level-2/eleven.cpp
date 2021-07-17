/*Find if there is a subarray with 0 sum
Difficulty Level : Medium
Last Updated : 08 Feb, 2021
Given an array of positive and negative numbers, find if there is a subarray (of size at-least one) with 0 sum.*/
/*
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,flag=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==0){
      flag=1;
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      sum+=a[j];
      if(sum==0){
        flag=1;
        break;
      }
    }
    sum=0;
  }
  if(flag==1){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }
  return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,flag=0;
  cin>>n;
  int a[n];
  map<int,int> m;
  int x=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    x+=a[i];
    m[x]++;
    if(a[i]==0){
      flag=1;
    }
  }
  for(auto i:m){
    if(i.second>1){
      flag=1;
      break;
    }
  }
  if(flag==1){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }
  return 0;
}
