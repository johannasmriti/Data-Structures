/*Print a given matrix in spiral form
Difficulty Level : Medium
Last Updated : 07 Jul, 2021
Given a 2D array, print it in spiral form. See the following examples.

Examples: 

Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
Explanation: The output is matrix in spiral format. 

Input:  1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
Explanation :The output is matrix in spiral format.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //print_spiral(n,m,a);
    int i,k=0,l=0;
    int last_row=n-1,last_col=m-1;
    while(k<=last_row && l<=last_col){
        for(int i=l;i<=last_col;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(i=k;i<=last_row;i++){
            cout<<a[i][last_col]<<" ";
        }
        last_col--;
        if(k<=last_row){
            for(i=last_col;i>=l;i--){
                cout<<a[last_row][i]<<" ";
            }
            last_row--;
        }
        if(l<=last_col){
            for(i=last_row;i>=k;i--){
                cout<<a[i][l]<<" ";
            }
            l++;
        }
        //l++;
    }
    return 0;
}
