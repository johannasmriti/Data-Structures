/*Range and Coefficient of range of Array
Difficulty Level : Basic
Last Updated : 10 May, 2021
Given an array arr of integer elements, the task is to find the range and coefficient of range of the given array where: 
Range: Difference between the maximum value and the minimum value in the distribution. 
Coefficient of Range: (Max – Min) / (Max + Min).
Examples: 
 

Input: arr[] = {15, 16, 10, 9, 6, 7, 17} 
Output: Range : 11 
Coefficient of Range : 0.478261 
Max = 17, Min = 6 
Range = Max – Min = 17 – 6 = 11 
Coefficient of Range = (Max – Min) / (Max + Min) = 11 / 23 = 0.478261
Input: arr[] = {5, 10, 15} 
Output: Range : 10 
Coefficient of Range : 0.5 
*/
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
  sort(a,a+n);
  int range = a[n-1]-a[0];
  double co=(double)(a[n-1]-a[0])/(a[n-1]+a[0]);
  cout<<range<<" "<<co<<endl;
  return 0;
}
