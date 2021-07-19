/*Maximum Product Subarray
Difficulty Level : Hard
Last Updated : 08 Apr, 2021
Given an array that contains both positive and negative integers, find the product of the maximum product subarray. Expected Time complexity is O(n) and only O(1) extra space can be used.

Examples:

Input: arr[] = {6, -3, -10, 0, 2}
Output:   180  // The subarray is {6, -3, -10}

Input: arr[] = {-1, -3, -10, 0, 60}
Output:   60  // The subarray is {60}

Input: arr[] = {-2, -40, 0, -2, -3}
Output:   80  // The subarray is {-2, -40}*/
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
   int max_so_far=-1;
   int max_ending_here=1;
   for(int i=0;i<n;i++){
       max_ending_here*=abs(a[i]);
       if(max_ending_here>max_so_far){
           max_so_far=max_ending_here;
       }
       if(max_ending_here<=0){
           max_ending_here=1;
       }
   }
   cout<<max_so_far<<endl;
   return 0;
}
