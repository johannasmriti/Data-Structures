#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void rearrange(int a[],int n){
  int x,temp,j;
  for(int i=0;i<n;i++){
    if(a[i]>0){
      //x=i;
      j=i;
      //x=a[j];
      while(a[i]>0 ){
        i++;
      }
      //swap(&a[i],&a[x]);
      if(i<n){
        x=j;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i--;
      }
    }
  }
  int pivot=x+1;
  int d=0;
  for(int i=0;i<n;i++){
    if(d<pivot){
      if(i%2==0){
        cout<<a[pivot]<<" ";
        pivot++;
      }
      else{
        cout<<a[d]<<" ";
        d++;
      }
    }
    else{
      cout<<a[pivot]<<" ";
      pivot++;
    }
  }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  rearrange(a,n);
  /*for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }*/
  return 0;
}
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
