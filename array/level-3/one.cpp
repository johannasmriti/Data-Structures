/*Given an array arr[], find the maximum j – i such that arr[j] > arr[i]
Difficulty Level : Hard
Last Updated : 10 Jul, 2021
Given an array arr[], find the maximum j – i such that arr[j] > arr[i].

Examples : 

  Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}
  Output: 6  (j = 7, i = 1)

  Input: {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
  Output: 8 ( j = 8, i = 0)

  Input:  {1, 2, 3, 4, 5, 6}
  Output: 5  (j = 5, i = 0)

  Input:  {6, 5, 4, 3, 2, 1}
  Output: -1 
*/
#include <bits/stdc++.h>

using namespace std;


int mapGap(int *a, int n1){
    if(n1==1){
        return 0;
    }
    vector<pair<int,int>> p;
    for(int i=0;i<n1;i++){
        p.push_back({a[i],i});
    }
    sort(p.begin(),p.end());
    int m=INT_MAX,ans=0;
    for(int i=0;i<n1;i++){
        m=min(m,p[i].second);
        ans=max(ans,p[i].second-m);
    }
    return ans;
}
int main()
{
   int n;
   cin>>n;
   int v[n];
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   int x=mapGap(v, n);
   cout<<x;
   return 0;
}
