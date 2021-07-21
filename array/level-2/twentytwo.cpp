/*Find a triplet that sum to a given value
Difficulty Level : Medium
Last Updated : 04 Jun, 2021
Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.

Examples: 
 

Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
Output: 12, 3, 9 
Explanation: There is a triplet (12, 3 and 9) present 
in the array whose sum is 24. 
Input: array = {1, 2, 3, 4, 5}, sum = 9 
Output: 5, 3, 1 
Explanation: There is a triplet (5, 3 and 1) present 
in the array whose sum is 9.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a,a+n);
    int flag=0;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(a[l]+a[r]+a[i]==k){
                cout<<a[l]<<" "<<a[r]<<" "<<a[i]<<endl;
                flag=1;
                break;
            }
            else if(a[l]+a[r]+a[i]>k){
                r--;
            }
            else if(a[l]+a[r]+a[i]<k){
                l++;
            }
        }
    }
    if(flag==1){
        cout<<"True, Johanna you did an amazing job!";
    }
    else{
        cout<<"There is no triplet available sorry lel";
    }
    return 0;
}
