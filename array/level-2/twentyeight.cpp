/*Majority Element
Difficulty Level : Medium
Last Updated : 22 Apr, 2021
Write a function which takes an array and prints the majority element (if it exists), otherwise prints “No Majority Element”. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

Examples : 

Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater
than the half of the size of the array size. 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,flag=0;
    cin>>n;
    map<int,int> map;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        map[x]++;
    }
    for(auto i:map){
        if(i.second>n/2){
            cout<<i.first<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"There is no Majority element in the given array ;_;"<<endl;
    }
}
