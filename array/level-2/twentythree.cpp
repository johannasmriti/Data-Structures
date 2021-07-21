/*Construct a unique matrix n x n for an input n
Difficulty Level : Hard
Last Updated : 21 Apr, 2021
Given an odd integer n, find a matrix of size n x n with following conditions:
 

Each cell contains an integer from 1 and n (inclusive).
No integer appears twice in the same row or the same column.
All 1’s must be at every possible distance from the center of the matrix. The center of a n x n square is cell ((n-1)/2, (n-1)/2) for odd n.
Example : 
 

Input  : n = 1
Output : 1

Input : n = 3
Output: 3 2 1
        1 3 2
        2 1 3

Input : n = 5
Output : 5 3 2 4 1 
         1 4 3 5 2 
         2 5 4 1 3 
         3 1 5 2 4 
         4 2 1 3 5 */
#include <bits/stdc++.h>

using namespace std;

const int MAX=100;
int a[MAX][MAX];

void fillin(int i, int j, int n){
    int x=2;
    for(int k=i+1;k<n;k++){
        a[k][j]=x;
        x++;
    }
    for(int k=0;k<i;k++){
        a[k][j]=x;
        x++;
    }
}

void nqueensimilar(int n){
    //int a[n][n];
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i][r]=1;
            fillin(i,r,n);
            r--;
        }
        else{
            a[i][l]=1;
            fillin(i,l,n);
            l++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    nqueensimilar(n);
    return 0;
}
