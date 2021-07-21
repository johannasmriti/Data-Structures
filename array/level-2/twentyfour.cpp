/*Find the row with maximum number of 1s
Difficulty Level : Medium
Last Updated : 28 Jun, 2021
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s. 

Example:  

Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int max=0;
    int index;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            if(x==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    cout<<index;
    return 0;
}
