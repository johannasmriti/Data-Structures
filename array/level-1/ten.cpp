/*Union and Intersection of two sorted arrays
Difficulty Level : Easy
Last Updated : 11 May, 2021
Given two sorted arrays, find their union and intersection.
Example:

Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output : Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}

Input : arr1[] = {2, 5, 6}
        arr2[] = {4, 6, 8, 10} 
Output : Union : {2, 4, 5, 6, 8, 10} 
         Intersection : {6}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n],b[n];
    map<int,int> m;
    cout<<"Enter the elements of array A: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;

    }
    cout<<"Enter the elements of array B: ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];m[b[i]]++;
    }
    cout<<"Union of arrays A and B is: ";
    for(auto i:m)
    {
        cout<<i.first<<"  ";
    }
    std::vector<int> v1(n);
    std::vector<int>::iterator it, ls;
    ls = std::set_intersection(a, a+n, b, b+n, v1.begin());

    std::cout << "\nThe intersection has " << (ls - v1.begin()) << " elements:";
    for (it = v1.begin(); it != ls; ++it)
        std::cout << ' ' << *it;
}
