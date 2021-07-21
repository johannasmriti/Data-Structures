/*Find whether an array is subset of another array | Added Method 5
Difficulty Level : Easy
Last Updated : 20 Jul, 2021
Given two arrays: arr1[0..m-1] and arr2[0..n-1]. Find whether arr2[] is a subset of arr1[] or not. Both the arrays are not in sorted order. It may be assumed that elements in both array are distinct.

Examples: 

Input: arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 7, 1} 
Output: arr2[] is a subset of arr1[]

Input: arr1[] = {1, 2, 3, 4, 5, 6}, arr2[] = {1, 2, 4} 
Output: arr2[] is a subset of arr1[]

Input: arr1[] = {10, 5, 2, 23, 19}, arr2[] = {19, 5, 3} 
Output: arr2[] is not a subset of arr1[] 

*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //int a[n],b[m];
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    int p=s.size();
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        s.insert(b);
    }
    if(p==s.size()){
        cout<<"B is a subset of A"<<endl;
    }
    else{
        cout<<"B is not subset of A"<<endl;
    }
    return 0;
}
