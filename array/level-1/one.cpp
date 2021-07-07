/*Check if a key is present in every segment of size k in an array*/
/*Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].
Examples: 

Input : 
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3} 
x = 3 
k = 3 
Output : Yes 
There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.
Input : 
arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25} 
x = 23 
k = 5 
Output :Yes 
There are three segments and last segment is not full {21, 23, 56, 65, 34}, {54, 76, 32, 23, 45} and {21, 23, 25}. 
23 is present all window.
Input :arr[] = { 5, 8, 7, 12, 14, 3, 9} 
x = 8 
k = 2 
Output : No*/
#include <iostream>

using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int a[n];
  cout<<"Enter the elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int x,k;
  cout<<"Enter x: ";
  cin>>x;
  cout<<"Enter k: ";
  cin>>k;
  int j=1,count=0,flag=0;
  for(int i=0;i<n;i++,j++){
    if(a[i]==x){
      count++;
    }

    if(j%k==0){
      if(count>0){
        count=0;
      }
      else{
        flag=1;
        break;
      }
    }
  }
  if(flag==0){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}
