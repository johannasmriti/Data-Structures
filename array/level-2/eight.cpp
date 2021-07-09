/*Non-Repeating Element
Difficulty Level : Basic
Last Updated : 16 Apr, 2020
Find the first non-repeating element in a given array of integers.

Examples:

Input : -1 2 -1 3 2
Output : 3
Explanation : The first number that does not 
repeat is : 3

Input : 9 4 9 6 7 4
Output : 6*/
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
    if(m[a[i]]==1){
      cout<<a[i]<<endl;
      flag=1;
      break;
    }
  }
  if(flag==0){
    cout<<"No non-repeating elements"<<endl;
  }
  return 0;
}
