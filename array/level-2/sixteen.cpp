/*Find the minimum element in a sorted and rotated array
Difficulty Level : Medium
Last Updated : 01 Apr, 2021
A sorted array is rotated at some unknown point, find the minimum element in it. 
The following solution assumes that all elements are distinct.

Examples: 

Input: {5, 6, 1, 2, 3, 4}
Output: 1

Input: {1, 2, 3, 4}
Output: 1

Input: {2, 1}
Output: 1*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int x;
   cin>>x;
   int min=x;
   for(int i=0;i<n;i++){
       int y;
       cin>>y;
       if(y<x){
           min=y;
           break;
       }
       x=y;
   }
   cout<<min;
   return 0;
}
