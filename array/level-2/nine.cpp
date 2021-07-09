/*Find the largest three distinct elements in an array
Difficulty Level : Easy
Last Updated : 09 Mar, 2021
Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1). 
Examples :

Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23*/
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  set<int> s(a,a+n);
  set<int>::iterator i=s.begin();
  /*int k=s.size();
  advance(i,k-1);
  cout<<*i<<" ";
  advance(i,k-2);
  cout<<*i<<" ";
  advance(i,k-3);
  cout<<*i<<endl;*/
  int j=0; i=s.end();
    for(--i;j!=3;i--)
    {
        j++;
        cout<<*i<<" ";
    }
  return 0;
}
