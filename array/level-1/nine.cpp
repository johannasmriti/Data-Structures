/*Move all negative numbers to beginning and positive to end with constant extra space
Difficulty Level : Easy
Last Updated : 09 Jun, 2021
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Note: Order of elements is not important here.*/
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  int j=0;
  for(int i=0;i<n;i++){
    if(a[i]<0){
      if(i!=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
      j++;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
