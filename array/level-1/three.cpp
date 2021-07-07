/*Write a program to reverse an array or string
Difficulty Level : Basic
Last Updated : 08 Sep, 2020
 
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}*/
#include <iostream>
#include<string>

using namespace std;

int main() {
  string s;
  cin>>s;
  int start=0,end=s.length()-1;
  while(start<end){
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    end--;
    start++;
  }
  cout<<s<<endl;
  return 0;
}
