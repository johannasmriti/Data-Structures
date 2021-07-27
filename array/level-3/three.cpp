/*Find the repeating and the missing | Added 3 new methods
Difficulty Level : Medium
Last Updated : 19 Jul, 2021
Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

Examples: 

 Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int c=1,missing,rep;
    for(auto i:m){
        if(i.first!=c){
            missing=i.first-1;
            //cout<<i.first<<endl;
        }
        if(i.second>1){
            rep=i.first;
        }
        c++;
    }
    cout<<missing<<" "<<rep<<endl;
    return 0;
}
