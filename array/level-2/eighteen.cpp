/*GCDs of given index ranges in an array
Difficulty Level : Medium
Last Updated : 23 Jan, 2020
Given an array a[0 . . . n-1]. We should be able to efficiently find the GCD from index qs (query start) to qe (query end) where 0 <= qs <= qe <= n-1.

Example :

Input : a[] = {2, 3, 60, 90, 50};
        Index Ranges : {1, 3}, {2, 4}, {0, 2}
Output: GCDs of given ranges are 3, 10, 1*/
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    
    if(b==0){
        return a;
    }
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}

int main()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<k;i++){
       int x,y;
       cin>>x>>y;
       int g=gcd(a[x],a[x+1]);
       for(int j=x+2;j<=y;j++){
           int l=gcd(a[j],g);
           g=l;
       }
       cout<<g<<endl;
   }
   return 0;
}
