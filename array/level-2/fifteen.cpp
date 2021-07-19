/*Longest Consecutive Subsequence
Difficulty Level : Medium
Last Updated : 13 Jul, 2021
Given an array of integers, find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order. 

Examples:  

Input: arr[] = {1, 9, 3, 10, 4, 20, 2}
Output: 4
Explanation: 
The subsequence 1, 3, 4, 2 is the longest 
subsequence of consecutive elements

Input: arr[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42}
Output: 5
Explanation: 
The subsequence 36, 35, 33, 34, 32 is the longest 
subsequence of consecutive elements.*/
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
   sort(a,a+n);
   int max_so_far=-1;
   int max_ending_here=0;
   int count=0;
   for(int i=1;i<n;i++){
       //max_ending_here=abs(a[i]);
       while(1){
           if(a[i]-a[i-1]==1){
               max_ending_here++;
           }
           else{
               break;
           }
           i++;
       }
       if(max_ending_here>max_so_far){
           max_so_far=max_ending_here;
       }
       max_ending_here=0;
   }
   cout<<max_so_far+1<<endl;
   return 0;
}
