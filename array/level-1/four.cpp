/*K’th Smallest/Largest Element in Unsorted Array | Set 1
Difficulty Level : Medium
Last Updated : 03 Jul, 2021
 
Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

Examples:  

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 4 
Output: 10 */

/*method 1 set*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  /*for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[j]<a[i]){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }*/
  int k;
  cin>>k;
  //cout<<a[k-1]<<" "<<a[n-k-1];
  set<int> s(a,a+n);
  set<int> :: iterator it=s.begin();
  advance(it,k-1);
  cout<<"The kth smallest element is "<<*it<<endl;
  advance(it,n-k-1);
  cout<<"The kth largest element is "<<*it<<endl;
  return 0;
}

/*method 2 map
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  map<int,int> mp;

  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    mp[c]++;
  } 
  int k;
  cin>>k;
  int x=0;
  for(auto i:mp){
    x++;
    if(x==k){
      cout<<"The kth smallest element is "<<i.first;
      break;
    }
  }
  return 0;
}*/
