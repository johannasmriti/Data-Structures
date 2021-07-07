/*Program to find the minimum (or maximum) element of an array
Given an array, write functions to find the minimum and maximum elements in it. */

/*method 1
#include <iostream>
#include<algorithm>

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
  sort(a,a+n);
  cout<<a[0]<<" "<<a[n-1]<<endl;
  return 0;
}*/

/*method 2 
#include <bits/stdc++.h>

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
  cout<<*min_element(a,a+n)<<" "<<*max_element(a,a+n)<<endl;
  return 0;
}*/

/*method 3*/
#include <iostream>
#include<algorithm>

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
  int min=a[0],max=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
    else if(a[i]<min){
      min=a[i];
    }
  }
  cout<<min<<" "<<max<<endl;
  return 0;
}
