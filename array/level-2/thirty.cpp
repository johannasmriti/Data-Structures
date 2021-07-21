#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int water=0;
    int max1=0,max2=0;
    for(int i=1;i<n-1;i++){
        max1=a[i];
        max2=a[i];
        for(int j=i;j>=0;j--){
            max1=max(max1,a[j]);
        }
        for(int j=i+1;j<n;j++){
            max2=max(max2,a[j]);
        }
        water+=(min(max1,max2)-a[i]);
    }
    cout<<water<<endl;*/
    int result=0;
    int rmax=0,lmax=0;
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]<a[r]){
            if(a[l]>lmax){
                lmax=a[l];
            }
            else{
                result+=lmax-a[l];
            }
            l++;
        }
        else{
            if(a[r]>rmax){
                rmax=a[r];
            }
            else{
                result+=rmax-a[r];
            }
            r--;
        }
    }
    cout<<result<<endl;
    return 0;
}
