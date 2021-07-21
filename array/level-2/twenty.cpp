/*Minimum number of jumps to reach end
Difficulty Level : Medium
Last Updated : 16 Jul, 2021
 
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, they cannot move through that element. If the end isn’t reachable, return -1.

Examples: 

Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 (1-> 3 -> 8 -> 9)
Explanation: Jump from 1st element 
to 2nd element as there is only 1 step, 
now there are three options 5, 8 or 9. 
If 8 or 9 is chosen then the end node 9 
can be reached. So 3 jumps are made.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int minimum_jump_array[n],min_index[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       minimum_jump_array[i]=1000;
       min_index[i]=1000;
   }
   min_index[0]=0;
   minimum_jump_array[0]=0;
   for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
           if(i<=j+a[j]){
               minimum_jump_array[i]=min(minimum_jump_array[i],minimum_jump_array[j]+1);
               min_index[i]=min(min_index[i],j);
           }
       }
   }
   /*for(int i=0;i<n;i++){
       cout<<min_index[i]<<" ";
   }
   cout<<endl;*/
   cout<<minimum_jump_array[n-1];
   return 0;
}
