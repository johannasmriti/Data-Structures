/*Maximum Sum Path in Two Arrays
Difficulty Level : Medium
Last Updated : 23 Jun, 2021
Given two sorted arrays, such that the arrays may have some common elements. Find the sum of the maximum sum path to reach from the beginning of any array to end of any of the two arrays. We can switch from one array to another array only at common elements. 
Note: The common elements do not have to be at the same indexes.

Expected Time Complexity: O(m+n), where m is the number of elements in ar1[] and n is the number of elements in ar2[].

Examples: 

Input: ar1[] = {2, 3, 7, 10, 12}
       ar2[] = {1, 5, 7, 8}
Output: 35

Explanation: 35 is sum of 1 + 5 + 7 + 10 + 12.
We start from the first element of arr2 which is 1, then we
move to 5, then 7.  From 7, we switch to ar1 (as 7 is common)
and traverse 10 and 12.

Input: ar1[] = {10, 12}
       ar2 = {5, 7, 9}
Output: 22

Explanation: 22 is the sum of 10 and 12.
Since there is no common element, we need to take all 
elements from the array with more sum.

Input: ar1[] = {2, 3, 7, 10, 12, 15, 30, 34}
        ar2[] = {1, 5, 7, 8, 10, 15, 16, 19}
Output: 122

Explanation: 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int m;
   cin>>m;
   int b[m];
   for(int i=0;i<m;i++) cin>>b[i];
   int result=0,s1=0,s2=0,i=0,j=0;
   while(i<n && j<m)
   {
       if(a[i]<b[j])
       {
           s1+=a[i]; 
           i++;
       }
       else if(a[i]>b[j])
       {
           s2+=b[j]; 
           j++;
       }
       else{
           s1+=a[i];
           s2+=b[j];
           result+=max(s1,s2);
           s1=s2=0; 
           i++;
           j++;
       }
   }
   while(j<m) { 
       s2+=b[j];
       j++;
   }
   while(i<n) { 
       s1+=a[i]; 
       i++;
   }
   result += s1<s2? s2:s1;
   cout<<result;
   return 0;
}
