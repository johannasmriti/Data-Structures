/*Given an array of size n and a number k, find all elements that appear more than n/k times
Difficulty Level : Hard
Last Updated : 22 Jun, 2021
Given an array of size n, find all elements in array that appear more than n/k times. For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. There are two elements that appear more than two times, 2 and 3. */

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int k;
   cin>>k;
   int x=n/k;
   map<int,int> m;
   for(int i=0;i<n;i++){
       int c;
       cin>>c;
       m[c]++;
   }
   for(auto i:m){
       if(i.second>x){
           cout<<i.first<<" ";
       }
   }
   return 0;
}
