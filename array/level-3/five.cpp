/*Given a sorted array and a number x, find the pair in array whose sum is closest to x
Difficulty Level : Easy
Last Updated : 06 May, 2021
Given a sorted array and a number x, find a pair in array whose sum is closest to x.
Examples:

Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
Output: 22 and 30

Input: arr[] = {1, 3, 4, 7, 10}, x = 15
Output: 4 and 10*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int x;
   cin>>x;
   int min1=1000;
   int r=n-1;
   int l=0;
   int s,t;
   while(r>l){
       if(a[r]+a[l]>x){
           r--;
       }
       else{
           min1=min(min1,x-(a[r]+a[l]));
           s=a[r];
           t=a[l];
           l++;
       }
   }
   cout<<t<<" "<<s<<" "<<endl;
   return 0;
}
