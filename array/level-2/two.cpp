/*Find the Missing Number
Difficulty Level : Easy
Last Updated : 22 Jun, 2021
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
Example: 

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  sort(a,a+n);
  for(int i=1;i<n;i++){
    if(a[i]-a[i-1]>1){
      cout<<a[i]-1<<endl;
      break;
    }
  }
  return 0;
}
