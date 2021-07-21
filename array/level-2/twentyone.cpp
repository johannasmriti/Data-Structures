/*Find the two repeating elements in a given array | 6 Approaches
July 24, 2017 by Sumit Jain
Objective: Given an array of n+2 elements. All elements of the array are in range 1 to n and all elements occur once except two numbers which occur twice. Write an algorithm to find the two repeating numbers.

Example:

int [] A = {1,4,5,6,3,2,5,2};
int n = 6;
Output: Two Repeated elements are: 2 and 5*/
#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    int ans=1;
    for(int i=n;i>=1;i--){
        ans*=i;
    }
    return ans;
}

int main()
{
   int n;
   cin>>n;
   int l=n+2;
   int x=0,y=1;
   for(int i=0;i<l;i++){
       int u;
       cin>>u;
       x+=u;
       y*=u;
   }
   int a,b;
   int s=n*(n+1)/2;
   int p=fact(n);
   int h=a+b;
   h=x-s;
   int g=a*b;
   g=y/p;
   int z=a-b;
   z=sqrt(pow(h,2)-(4*(g)));
   a=((h)+(z))/2;
   b=(h)-a;
   cout<<a<<endl;
   cout<<b<<endl;
   return 0;
}
