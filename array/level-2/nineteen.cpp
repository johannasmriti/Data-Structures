/*Minimize the maximum difference between the heights
Difficulty Level : Hard
Last Updated : 19 Jul, 2021
Given heights of n towers and a value k. We need to either increase or decrease the height of every tower by k (only once) where k > 0. The task is to minimize the difference between the heights of the longest and the shortest tower after modifications and output this difference.
Examples: 

Input  : arr[] = {1, 15, 10}, k = 6
Output :  Maximum difference is 5.
Explanation : We change 1 to 7, 15 to 
9 and 10 to 4. Maximum difference is 5
(between 4 and 9). We can't get a lower
difference.*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   sort(a,a+n);
   int min_element,max_element;
   int result=a[n-1]-a[0];
   for(int i=1;i<n;i++){
       if(a[i]>=k && a[n-1]>=k){
           max_element=max(a[i-1]+k,a[n-1]-k);
           min_element=min(a[0]+k,a[i]-k);
           result=min(result,max_element-min_element);
       }
   }
   cout<<result<<endl;
   return 0;
}
